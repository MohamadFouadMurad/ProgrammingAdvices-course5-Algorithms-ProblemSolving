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

void CopyNumber(int arr[100], int arr2[100], int arrlength)
{
	for (int i = 0; i < arrlength; i++)
	{
		arr2[i] = arr[i];
	}
}


int main()
{
	srand((unsigned)time(NULL));

	int arr[100], arrLength;

	FillArrayElement(arr, arrLength);

	int arr2[100];
	CopyNumber(arr, arr2, arrLength);
	
	cout << "element 1 : ";
	PrintArray(arr, arrLength);

	cout << endl;

	cout << "element 2 : ";
	PrintArray(arr2, arrLength);
	
	return 0;
}