#pragma once
#include <string>
namespace baseTool
{
	namespace stringConversion
	{
		template<typename T>
		T StringToT(const std::string& str_raw)
		{
			return T();
		}

		template<typename T>
		std::string ToString(T t)
		{
			return string();
		}

		void StrignToArray()
		{

		}
	}
}