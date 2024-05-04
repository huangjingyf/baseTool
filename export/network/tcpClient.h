#pragma once
#include <memory>
namespace baseTool
{
	namespace network
	{
		struct CTCPClientPrivateData;
		class CTCPClient
		{
		public:
			CTCPClient();
			~CTCPClient();
		private:
			std::shared_ptr<CTCPClientPrivateData> ptr_data_;
		};
	}
}