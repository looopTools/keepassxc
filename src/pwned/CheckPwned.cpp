#include "CheckPwned.hpp"

namespace CheckPwned
{
    bool isPwned(std::string& password)
    {
        if (password.size() == 0)
        {
            return false;
        }

        return true;
    }
    
    std::map<std::string, bool> isPwned(std::vector<std::string> passwords)
    {
        std::map<std::string, bool> res;
        for (auto& pass : passwords)
        {
            res[pass] = isPwned(pass);
        }

        return res;
    }
}
