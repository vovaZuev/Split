#include <iostream>
using namespace std;

void PrintArray(int* arr, const int n);

int main()
{
	setlocale(LC_ALL, "");
	int n = 10;
	int n_even = 0, n_odd = 0;
	int cnt_even = 0, cnt_odd = 0;

	int* arr = new int[n];
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 100;
		if (arr[i] % 2)
			n_odd++;
		else
			n_even++;
	}

	int* even = new int[n_even];
	int* odd = new int[n_odd];

	for (int i = 0; i < n; i++)
	{
		if (arr[i] % 2)
		{
			odd[cnt_odd] = arr[i];
			cnt_odd++;
		}
		else
		{
			even[cnt_even] = arr[i];
			cnt_even++;
		}
	}
	cout << "Исходный массив: "; PrintArray(arr, n);
	cout << "Массив чётных чисел: "; PrintArray(even, n_even);
	cout << "Массив нечётных чисел: "; PrintArray(odd, n_odd);
}

void PrintArray(int* arr, const int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}