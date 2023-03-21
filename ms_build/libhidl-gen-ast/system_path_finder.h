#pragma once
#include <string>

/**
 * Find the system directory for android.hardware, android.hidl,
 * android.frameworks and android.system
 */
std::string find_system_source_path(std::string a_name);
