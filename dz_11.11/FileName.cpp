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
	std::swap(arr2, arr);
	size++;
	for (size_t i = 0; i < size; i++)
	{
		std::cout << arr[i] << " ";
	}
	std::cout << "\n";
	delete[] arr2;
}
void Addin()
{
	int* arr1 = new int[size + 1];
	int u, p;
	std::cout << "для вставки выберете индекс 1 - 5 и число - ";
	std::cin >> u;
	std::cin >> p;
	for (size_t i = 0; i < size + 1; i++)
	{
		if (i == u - 1)
		{
			arr1[i] = p;
		}
		else
		{
			arr1[i] = arr[i];
		}
	}
	std::swap(arr1, arr);
	delete[] arr1;
}
void Deletein()
{
	int* arr1 = new int[size - 1];
	int u, p;
	std::cout << "для удаления выберете индекс 1 - 5 - ";
	std::cin >> u;
	for (size_t i = 0; i < size - 1; i++)
	{
		if (i == u - 1 && u != size)
		{
			arr1[i] = arr[i + 1];
		}
		else
		{
			arr1[i] = arr[i];
		}
	}
	size--;
	std::swap(arr1, arr);
	delete[] arr1;
}



int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	Arr();
	Cout();
	/*Add();*/
	Addin();
	Cout();
	Deletein();
	Cout();




	Delete();
	return 0;
}