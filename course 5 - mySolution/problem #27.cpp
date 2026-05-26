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

float SumRandomNumber(int arr[100], int arrLength)
{
	float sum = 0;
	float average = 0;

	for (int i = 0; i < arrLength; i++)
	{
		sum += arr[i];
	}

	average = sum / arrLength;
	return average;
}

int main()
{
	srand((unsigned)time(NULL));

	int arr[100], arrLength;

	FillArrayElement(arr, arrLength);
	PrintArray(arr, arrLength);
	cout << endl;
	cout << "sum numbers  is : " << SumRandomNumber(arr, arrLength) << endl;

	return 0;
}

