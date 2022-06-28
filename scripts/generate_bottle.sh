#! /bin/bash

VERS=`sw_vers -productVersion | awk '/^12\..*/{print $0}'`
if [[ -z "$VERS" ]];
then
  echo "Error, unsupported MacOS version"
  exit -1
fi
MAC_VERSION="monterey"

ARCH=$(uname -m)
if [[ "${ARCH}" == "arm64" ]];
then
  MAC_VERSION="arm64_${MAC_VERSION}"
fi

NAME="${PROJECT}-${VERSION}.${MAC_VERSION}.bottle.tar.gz"

#mkdir -p ${PROJECT}/${VERSION}/opt/eosio_cdt/lib/cmake

PREFIX="${PROJECT}/${VERSION}"
if [[ "${ARCH}" == "x86_64" ]];
then
  SPREFIX="usr\/local"
elif [[ "${ARCH}" == "arm64" ]];
then
  SPREFIX="opt\/homebrew"
else
  echo "Error, unsupported architecture"
  exit -1
fi
SUBPREFIX="opt/${PROJECT}"
SSUBPREFIX="opt\/${PROJECT}\/opt\/${PROJECT}"

export PREFIX
export SPREFIX
export SUBPREFIX
export SSUBPREFIX

bash generate_tarball.sh ${NAME}

hash=`openssl dgst -sha256 ${NAME} | awk 'NF>1{print $NF}'`

echo "class Blanc < Formula

  homepage \"${URL}\"
  revision 0
  url \"https://github.com/haderech/blanc/archive/${VERSION}.tar.gz\"
  version \"${VERSION}\"

  option :universal

  depends_on \"binaryen\"
  depends_on \"cmake\"
  depends_on \"llvm\"
  depends_on :xcode => :build
  depends_on :macos => :monterey

  bottle do
    root_url \"https://github.com/haderech/blanc/releases/download/${VERSION}\"
    sha256 ${MAC_VERSION}: \"${hash}\"
  end
  def install
    raise \"Error, only supporting binary packages at this time\"
  end
end
__END__" &> ${PROJECT}.rb

rm -r ${PROJECT}
