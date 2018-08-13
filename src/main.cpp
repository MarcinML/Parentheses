#include <iostream>
#include "Braces.hpp"

int main()
{
    Braces b;
    b.checkBrackets("{{)(}}");

    std::cout << "Braces!" << std::endl;
    return 0;
}
