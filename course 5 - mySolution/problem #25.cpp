#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int RandomNumber(int from, int to)
{
	int random = rand() % (to - from + 1) + from;
	return random;
}

void FillArrayElement(int arr[100], int& arrLength)
{
	cout << "pls Number of element : " << endl;
	cin >> arrLength;

	for (int i = 0; i < arrLength; i++)
	{
		arr[i] = RandomNumber(1, 100);
	}
}

void PrintArray(int arr[100], int arrLength)
{
	for (int i = 0; i < arrLength; i++)
	{
		cout << arr[i] << " ";
	}
}

int MinNumber(int arr[100], int arrLength)
{
	int max = arr[0];

	for (int i = 0; i < arrLength; i++)
	{
		if (arr[i]  < max)
		{
			max = arr[i];
		}
	}
	return max;
}

int main()
{
	srand((unsigned)time(NULL));

	int arr[100], arrLength;

	FillArrayElement(arr, arrLength);
	PrintArray(arr, arrLength);
	cout << endl;
	cout << "min number  is : " << MinNumber(arr, arrLength) << endl;

	return 0;
}