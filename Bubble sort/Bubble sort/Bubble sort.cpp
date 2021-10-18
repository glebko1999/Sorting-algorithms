// Bubble sort.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <cstdlib>
#include <time.h>
void swap_array_elements(int a, int b, int arr[])
{
	int temp = arr[a];
	arr[a] = arr[b];
	arr[b] = temp;
}
void printf_array_elements(int arr[]) {
	for (int i = 0; i < 10; i++) {
		std::cout << arr[i] << "\t";
	}
	std::cout << "\n";
}
int main()
{
	int min, max;
	std::cout << "Enter upper limit: ";
	std::cin>> max;
	std::cout << "Enter lower limit: ";
	std::cin >> min;
	srand(time(NULL));
	int Array[10],i,a=1;

	for (i = 0; i < 10; i++) {
		Array[i] = min + rand() % (max - min + 1);
	}
	printf_array_elements(Array);

	std::cout << "\n";
	for (int j = 0; j < 10; j++) {
		for (i = 0; i < 9; i++) {
			if (Array[i] > Array[i + 1]) {
				swap_array_elements(i, i + 1, Array);
			}
		}
		printf_array_elements(Array);
	}
	printf_array_elements(Array);
}


