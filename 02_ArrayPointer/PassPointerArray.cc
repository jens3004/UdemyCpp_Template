#include <iostream>

int array_max(int *input_array, unsigned int length)
{
    int current_max_value = 0;
    for (int i = 0; i < length; i++)
    {
        if (0 == i)
        {
            current_max_value = input_array[i];
        }
        else if (input_array[i] > current_max_value)
        {
            current_max_value = input_array[i];
        }
    }
    return current_max_value;
}

int main()
{
    unsigned int array_size = 10;

    //heap allocation
    int *p = new int[array_size];

    for (int i = 0; i < array_size; i++)
    {
        p[i] = i;
    }

    for (int i = 0; i < array_size; i++)
    {
        std::cout << p[i] << std::endl;
    }

    int max = array_max(p, array_size);

    std::cout << "Max: " << max << std::endl;

    //heap de-allocation
    delete[] p;

    return 0;
}
