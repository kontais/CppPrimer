#include "ex12_02.h"
#include <iostream>

int main()
{
    StrBlob b1;
    {
        StrBlob b2 = {"a", "an", "the"};
        std::cout << "b1 size = " << b1.size() << std::endl;
        std::cout << "b2 size = " << b2.size() << std::endl;

        b1 = b2;
        b2.push_back("about");

        std::cout << "b1 size = " << b1.size() << std::endl;
        std::cout << "b2 size = " << b2.size() << std::endl;
    }
    std::cout << "b1 size = " << b1.size() << std::endl;
}
