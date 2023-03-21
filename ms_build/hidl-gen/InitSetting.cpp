#include "InitSetting.h"
#include <cutils/properties.h>

#include <filesystem>
#include <iostream>

#define HIDL_GEN_SETTING_FILE_NAME "hidl_gen_settings.ini"

void InitSetting(std::string a_exe_path)
{

    std::filesystem::path exe_path(a_exe_path);
    std::filesystem::path exe_parent_path;

    if (exe_path.has_extension())
    {
        exe_parent_path = exe_path.parent_path();
    }

    bool parent_exist = std::filesystem::exists(exe_parent_path);
    if (parent_exist)
    {
        std::filesystem::path file_path = exe_parent_path / HIDL_GEN_SETTING_FILE_NAME;
        bool _exist = std::filesystem::exists(file_path);
        if (!_exist)
        {
            std::cout << "No such file: " << file_path.string() << std::endl;
            return;
        }

        parse_property_from_ini(file_path.string().c_str());
    }
}

