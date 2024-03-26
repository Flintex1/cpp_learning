#include <iostream>

int main()
{

    int i = 1;
    while (i <= 256)
    {
        std::cout << "Character is " << char(i) << std::endl;
        ++i;
    }
    return 0;
}
