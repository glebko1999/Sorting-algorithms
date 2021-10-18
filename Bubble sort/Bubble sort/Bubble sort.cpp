// Bubble sort.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <cstdlib>
#include <time.h>
void swap_array_elements(int a, int b, int arr[])	/*Функция перестановки переменных*/
{
	int temp = arr[a];
	arr[a] = arr[b];
	arr[b] = temp;
}
void printf_array_elements(int arr[]) {			/*Функция для вывода массива*/
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
	int Array[10],i,completion=0;

	for (i = 0; i < 10; i++) {
		Array[i] = min + rand() % (max - min + 1);  /*Создание случайного набора символов со значениями от min до max*/
	}
	printf_array_elements(Array);

	std::cout << "\n";
	for (int j = 0; j < 10; j++) {
		for (i = 0; i < 9; i++) {
			if (Array[i] > Array[i + 1]) {
				swap_array_elements(i, i + 1, Array);
			}
			else { completion++; }
		}
		if (completion == 9)
		{
			break;
		}
		else { completion = 0; }
		printf_array_elements(Array);	
	}
}


