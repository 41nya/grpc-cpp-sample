SRC=client.cpp ../syn.grpc.pb.cc ../syn.pb.cc
OBJ=client ../syn.grpc.pb.o ../syn.pb.o
INCLUDE_PATH=-I../grpc/include -I../grpc/third_party/protobuf/src
LIB_PATH=-L../grpc/libs/opt -L../grpc/libs/opt/protobuf
LIB=-lgrpc++ -lprotobuf

client:
	g++ -std=c++11 $(SRC) $(INCLUDE_PATH) $(LIB_PATH) -o $@ $(LIB) 

clean:
	rm -f $(OBJ)