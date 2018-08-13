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

        if( v.empty() || !everyoneHasPair(v.back(), oneElement))
        return false;
        else
        v.pop_back();
    }
   }
    return v.empty();
}


bool Braces::everyoneHasPair(char l, char r)
{
    if((l == '(' && r == ')')) return true;
    if((l == '{' && r == '}')) return true;
    if((l == '[' && r == ']')) return true;
    return false;
}
