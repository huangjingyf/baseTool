#pragma once
#include <string>
#include <vector>
#include <sstream>
namespace baseTool
{
	namespace stringConversion
	{
		template<typename T>
		T StringToT(const std::string& str_raw)
		{
			if (str_raw.empty())
			{
				return T();
			}
			T rt;
			std::stringstream ss(str_raw);
			ss >> rt;
			return rt;
		}
		template<>
		std::string StringToT<std::string>(const std::string& str_raw)
		{
			return str_raw;
		}

		template<typename T>
		std::string ToString(T t)
		{
			return std::string();
		}

		template<>
		std::string ToString<std::string>(std::string t)
		{
			return t;
		}

		template<typename T>
		void StrignToArray(std::vector<T>& vs_ret, const std::string& str_array, const std::string& sz_split=",")
		{
			vs_ret.clear();
			int pre_index = 0;
			int index = 0;
			int len = 0;
			while (index = str_array.find_first_of(sz_split, pre_index) != std::string::npos)
			{
				len = index - pre_index;
				vs_ret.push_back(StringToT<T>(str_array.substr(pre_index, len)));
				pre_index = index + 1;
			}
			if (pre_index < str_array.size())
			{
				// last one
				vs_ret.push_back(StringToT<T>(str_array.substr(pre_index, len)));
			}
		}

		template<typename T>
		void ArrayToString(std::string& str_array, std::vector<T>& vs_raw, const std::string& sz_split = ",")
		{
			if (vs_raw.empty())
			{
				return;
			}
			for (const auto& it : vs_raw)
			{
				str_array += TToString(it);
				str_array += sz_split;
			}
			str_array.erase(str_array.size() - 1, 1); //erase last split
		}
	}
}