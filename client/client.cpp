#include "../syn.grpc.pb.h"
#include "../syn.pb.h"
#include "grpcpp/grpcpp.h"

class SynClient {
public:
  SynClient(std::shared_ptr<::grpc::Channel> channel) : 
    stub_(SynService::NewStub(channel)) {}

    void execute() {
        SynRequest request;
        AckResponse response;

        ::grpc::ClientContext context;
        ::grpc::Status status = stub_->Syn(&context, request, &response);
        if (status.ok()) {
            std::cout << response.status() << ": " << response.detail() << std::endl;
        } else {
            std::cout << status.error_code() << ": " << status.error_message() << std::endl;
        }
    }
private:
  std::unique_ptr<SynService::Stub> stub_;
};

int main() {
    std::string target_str = "localhost:50051";
    SynClient client(::grpc::CreateChannel(
        target_str, ::grpc::InsecureChannelCredentials()));
    client.execute();

    return 0;
}