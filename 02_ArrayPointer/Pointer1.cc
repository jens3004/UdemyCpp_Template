#include <iostream>

int main()
{
    int number = 5;
    std::cout << "Value of number: " << number << std::endl;
    std::cout << "Adress of number: " << &number << std::endl;

    int *p = &number;
    std::cout << "Value of p: " << p << std::endl;
    std::cout << "Address of p: " << &p << std::endl;
    std::cout << "Value of the memory adress that p points to: " << *p << std::endl;

    return 0;
}
