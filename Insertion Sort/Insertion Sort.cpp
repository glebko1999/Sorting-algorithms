// Insertion Sort.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <time.h>
#include <cstdlib>

void print_array(int array[]) 
{
    for (int i = 0; i <= 9; i++)
    {
        std::cout << array[i] << "\t";
    }
    std::cout << "\n";
}

int main()
{
    int min,max,array[10];
    std::cout << "Enter apper limit: ";
    std::cin >> max;
    std::cout << "Enter apper limit: ";
    std::cin >> min;
    
    srand(time(NULL));
    for (int i = 0; i <= 9; i++)
    {
        array[i] = min + rand() % (max - min + 1);
    }
    print_array(array);

    int key;
    for (int i = 1; i <= 9; i++)
    {
        key = array[i];
        for (int j = i-1; j >= 0; j--)
        {
            if (key <= array[j])
            {
                array[j+1] = array[j];
                array[j] = key;
            }
        }
        print_array(array);
    }
}
