#pragma once

#include <string>
#include <vector>
#include <map>

namespace CheckPwned
{
    bool isPwned(std::string& password);
    std::map<std::string, bool> isPwned(std::vector<std::string> passwords);
}
