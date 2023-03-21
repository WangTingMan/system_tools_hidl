#include "system_path_finder.h"
#include <cutils/properties.h>

#include <iostream>

std::string find_system_source_path(std::string a_name)
{
    char buffer[100] = { 0 };
    std::string ret_str;
    int r = property_get(a_name.c_str(), buffer, nullptr);
    if (r < 1)
    {
        std::cout << "[Error] Cannot find directory for " << a_name
            << std::endl;
    }
    else
    {
        ret_str.assign(buffer);
    }
    return ret_str;
}

