#include <cstdio>
#include <iostream>
#include "export/stringConversion/stringConversion.h"
int main()
{
    printf("%s 向你问好!\n", "baseTool");
    std::cout << "test1";
    int itest = baseTool::stringConversion::StringToT<int>("12345");
    return 0;
}