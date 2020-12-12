
## grpc sample in C++
This is a so simple sample using grpc, and C++.
This sample was created by the following procedure for Mac OS.

Setup
---
```bash
brew install autoconf automake libtool shtool
mkdir grpc
cd grpc
git clone -b v1.34.0 https://github.com/grpc/grpc 
git submodule update --init 
LIBTOOL=libtool LIBTOOLIZE=glibtoolize make 
```

I didn't use "glibtool"(written in grpc BUILDING.md) but "libtool. 
Because the following error was occurred.

```bash
...
[MAKE]    Building protobuf
checking whether to enable maintainer-specific portions of Makefiles... yes
configure: error: cannot find install-sh, install.sh, or shtool in "." "./.." "./../.."
make: *** [/grpc-cpp-sample/grpc/libs/opt/protobuf/libprotobuf.a] Error 1

==> Pouring libtool-2.4.6_2.big_sur.bottle.tar.gz
==> Caveats
In order to prevent conflicts with Apple's own libtool we have prepended a "g"
so, you have instead: glibtool and glibtoolize.
```

Generating code from .proto
---
```bash
cd ..
./grpc/bins/opt/protobuf/protoc -I ./protos/ --grpc_out=. --plugin=protoc-gen-grpc=./grpc/bins/opt/grpc_cpp_plugin ./protos/syn.proto
./grpc/bins/opt/protobuf/protoc -I ./protos --cpp_out=. ./protos/syn.proto
```

Usage
---
```bash
export DYLD_LIBRARY_PATH=./grpc/libs/opt
cd server
make
./server &
cd ../client
make
./client
```