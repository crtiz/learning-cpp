#include <iostream>

int returnFive()
{
    return 5;
}

int main()
{
    std::cout << returnFive() << '\n'; // prints 5
    std::cout << returnFive() + 2 << '\n'; // prints 7

    returnFive();

    return 0;
}