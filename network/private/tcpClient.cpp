#include "../tcpClient.h"
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

		}
		CTCPClient::~CTCPClient()
		{

		}

	}
}