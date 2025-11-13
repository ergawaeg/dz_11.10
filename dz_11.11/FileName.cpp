#include <iostream>
#include <Windows.h>
int size = 5;
int* arr;
void Arr()
{
	arr = new int[size] {1, 2, 3, 4, 5};
}
void Cout()
{
	for (size_t i = 0; i < size; i++)
	{
		std::cout << arr[i] << " ";
	}
	std::cout << "\n";
}
void Delete()
{
	delete[] arr;
}
void Add()
{
	int arr1[5];
	for (size_t i = 0; i < size; i++)
	{
		arr1[i] = arr[i];
	}
	int* arr2 = new int[6];
	for (size_t i = 0; i < size; i++)
	{
		arr2[i] = arr1[i];
	}
	std::cout << "введите число ";
	int u;
	std::cin >> u;
	arr2[5] = u;
	for (size_t i = 0; i < 6; i++)
	{
		std::cout << arr2[i] << " ";
	}
	std::cout << "\n";
	delete[] arr2;
}



int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	Arr();
	Cout();
	Add();





	Delete();
	return 0;
}