#include "Braces.hpp"
#include <vector>

Braces::Braces()
{

}

bool Braces::checkBrackets(const std::string& s)
{
    if(s.empty() || (s.size()%2 && s.size()>2)) return false;

    std::vector<char> v;

    for(auto oneElement : s){
    if(oneElement == '(' || oneElement == '[' || oneElement == '{')
    {
        v.push_back(oneElement);
    }
    else if(oneElement == ')' || oneElement == ']' || oneElement == '}')
    {
        if(v.empty()) return false;
        if((v.back() == '(' && oneElement == ')')) return true;
        if((v.back() == '{' && oneElement == '}')) return true;
        if((v.back() == '[' && oneElement == ']')) return true;
        v.pop_back();
        return false;
    }

    }
    v.clear();
    return true;
}

