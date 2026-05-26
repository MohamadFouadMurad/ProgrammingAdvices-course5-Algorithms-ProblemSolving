#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

enum enPrime{prime = 1,notprime =2};

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

enPrime CheckPrimeNumber(int number)
{
	int m = round(number / 2);

	for (int counter = 2; counter <= m; counter++)
	{
		if (number % m == 0) 
		{
			return enPrime::notprime;
		}
	}
	return enPrime::prime;
}

void CopyonlyPrimeNumber(int arr[100], int arr2[100], int arrlength,int &arr2length)
{
	int counter = 0;
	for (int i = 0; i < arrlength; i++)
	{
		if (CheckPrimeNumber(arr[i]) == enPrime::prime)
		{
			arr2[counter] = arr[i];
			counter++;
		}
	}

	arr2length = counter;
}


int main()
{
	srand((unsigned)time(NULL));

	int arr[100], arrLength;

	FillArrayElement(arr, arrLength);

	int arr2[100],arr2Length;
	CopyonlyPrimeNumber(arr, arr2, arrLength,arr2Length);

	cout << "element 1 : ";
	PrintArray(arr, arrLength);

	cout << endl;

	cout << "Prime Number in Array2 : ";
	PrintArray(arr2, arr2Length);

	return 0;
}