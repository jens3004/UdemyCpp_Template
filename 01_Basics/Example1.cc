#include <iostream>

int main()
{
    double sideLength;
    double perimeter = 0.0;
    double area = 0.0;

    std::cout << "Please enter the square side length: ";
    std::cin >> sideLength;

    perimeter = sideLength * 4;
    area = sideLength * sideLength;

    std::cout << "square perimeter = " << perimeter << std::endl;
    std::cout << "square area = " << area << std::endl;
    return 0;
}
