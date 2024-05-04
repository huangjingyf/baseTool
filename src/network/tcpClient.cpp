#include "export/network/tcpClient.h"
#include <string>
namespace baseTool
{
	namespace network
	{
		struct CTCPClientPrivateData
		{
			std::string server_address_;
			std::string server_port_;
		};

		CTCPClient::CTCPClient()
		{
			ptr_data_ = std::make_shared<CTCPClientPrivateData>();
		}
		CTCPClient::~CTCPClient()
		{

		}

	}
}