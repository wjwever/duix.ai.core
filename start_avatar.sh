echo "Installing relevant dependencies"
sudo apt install build-essential cmake wget curl ffmpeg git libopencv-dev libcurl4-openssl-dev -y
mkdir -p build
cd build
cmake ../
make -j$(($(nproc) - 1))
cp ../conf . -r
mkdir -p audio video

echo "Download relevant Resource"
if [ ! -d resource.tar.gz ]; then
  wget https://github.com/wjwever/duix.ai.core/releases/download/1.0/resource.tar.gz -O resource.tar.gz
  tar zxvf resource.tar.gz
fi

./bin/ws_server
