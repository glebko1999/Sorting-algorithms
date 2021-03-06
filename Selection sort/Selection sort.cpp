// Selection sort.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

	void printf_array_elements(int arr[]) {			/*Функция для вывода массива*/
		for (int i = 0; i < 10; i++) {
			std::cout << arr[i] << "\t";
		}
		std::cout << "\n";
	}
	void swap(int* a, int* b)
	{
		int c;
		c = *a;
		*a = *b;
		*b = c;
	}
	int main()
	{
		int min,max ,*min_index;
		int Array[10];

		std::cout << "Enter upper limit: ";
		std::cin >> max;
		std::cout << "Enter lower limit: ";
		std::cin >> min;

		srand(time(NULL));
		for (int i = 0; i < 10; i++)
		{
			Array[i] = min + rand() % (max - min + 1);  /*Создание случайного набора символов со значениями от min до max*/
		}
		printf_array_elements(Array);

		for (int i = 0; i < 9; i++)
		{
			min_index = &Array[i];
			min = Array[i];

			for (int j = i; j < 10; j++)
			{
				if (min > Array[j])
				{
					min_index = &Array[j];
				}
			}
			swap(min_index, &Array[i]);
		}
		printf_array_elements(Array);
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
