#include <string.h>
#include "../grpc/include/grpcpp/server.h"
#include "../grpc/include/grpcpp/server_builder.h"

#include "../syn.grpc.pb.h"
#include "../syn.pb.h"

class SyncServiceImpl final : public SynService::Service {
    ::grpc::Status Syn(::grpc::ServerContext* context, const ::SynRequest* request, ::AckResponse* response) override
    {
        response->set_status(Status::Ok);
        response->set_detail(std::string("success"));
        return ::grpc::Status::OK;
    }
};

int main() {
    grpc::ServerBuilder builder;
    SyncServiceImpl service;
    builder.AddListeningPort("0.0.0.0:50051", grpc::InsecureServerCredentials());
    builder.RegisterService(&service);
    std::unique_ptr<grpc::Server> server(builder.BuildAndStart());
    server->Wait();

    return 0;
}