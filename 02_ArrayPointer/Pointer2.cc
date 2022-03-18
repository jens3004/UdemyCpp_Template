#include <iostream>

int main()
{
    //heap allocation
    int *p = new int;
    *p = 4;

    std::cout << "Memory adress of p: " << &p << std::endl;
    std::cout << "Memory adress of pointed value: " << p << std::endl;
    std::cout << "Value of the memory adress p points to: " << *p << std::endl;

    //heap de-allocation
    delete p;

    return 0;
}
