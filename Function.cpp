#include <iostream>

#define SwapINT(a,b) int temp = arr[j];\
arr[j] = arr[j + 1];\
arr[j + 1] = temp;

using namespace std;

namespace MyFunc
{
	void PrintArrayFloat(float* arr, size_t size)  //  Функция для печати float массива
	{
		for (size_t i = 0; i < size; i++)
		{
			cout << arr[i] << " ";
		}
		cout << endl;

	}

	float* InitArrayFloat(float* arr, size_t size)  //  Функция заполнения массива float
	{
		for (size_t i = 0; i < size; i++)
		{
			arr[i] = 1.09721 + rand() % 10 - 5;
		}
		return arr;
	}

	void CounterElementsArr(float* arr, size_t size)  //  Счетчик положительных и отрицательных элементов
	{
		int plusfloat = 0, minusfloat = 0;
		for (size_t i = 0; i < size; i++)
		{
			if (arr[i] > 0)
			{
				plusfloat++;
			}
			else
			{
				minusfloat++;
			}
		}
		cout << "Counter plus element Array" << " " << plusfloat << endl;
		cout << "Counter minus element Array" << " " << minusfloat << endl;
	}
}

void PrintArr2(int *arr, size_t size)
{
	for (size_t i = 0; i < size; i++)
	{
		cout << arr[i] << " ";
	}cout << endl;
}

void swap(int* px, int* py)
{
	int temp = *px;
	*px = *py;
	*py = temp;
}

void bubbleSort(int arr[], int n)  // Оптимизированная версия пузырьковой сортировки
{
	int i, j;
	bool swapped;
	for (i = 0; i < n - 1; i++)
	{
		swapped = false;
		for (j = 0; j < n - i - 1; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				SwapINT(a, b)
				swapped = true;
			}
		}
		if (swapped == false)  // Если в процессе прохода не было ни одной замены, то выход из функции
			break;
	}
}

