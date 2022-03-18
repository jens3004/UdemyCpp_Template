#include <iostream>

void game()
{
    bool has_won = false;

    std::cout << "Welcome to my Guessing-Game!" << std::endl;

    do
    {
        int number;
        std::cout << "Please enter your number: ";
        std::cin >> number;

        if (number >= 0 && number <= 10)
        {
            if (4 == number)
            {
                std::cout << "You won!" << std::endl;
                has_won = true;
            }
            else if (0 == number % 2)
            {
                std::cout << "You won the wooden spoon!" << std::endl;
            }
            else
            {
                std::cout << "You lost!" << std::endl;
            }
        }
        else
        {
            std::cout << "You must enter a number between [0, 10]." << std::endl;
        }


    } while (false == has_won);
}
