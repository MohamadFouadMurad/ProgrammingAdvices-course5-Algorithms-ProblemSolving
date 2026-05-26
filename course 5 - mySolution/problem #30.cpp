#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;



int RandomNumber(int from, int to)
{
	int random = rand() % (to - from + 1) + from;
	return random;
}

void FillArrayElement(int arr[100], int& arrLength,int arr2[100])
{
	cout << "pls Number of element : " << endl;
	cin >> arrLength;

	for (int i = 0; i < arrLength; i++)
	{
		arr[i] = RandomNumber(1, 100);
	}

	for (int i = 0; i < arrLength; i++)
	{
		arr2[i] = RandomNumber(1, 100);
	}
}

void PrintArray(int arr[100], int arrLength)
{
	for (int i = 0; i < arrLength; i++)
	{
		cout << arr[i] << " ";
	}
}

void SumOfArra1andArra2Element(int arr[100], int arrlength, int arr2[100])
{
	for (int i = 0; i < arrlength; i++)
	{
		cout << arr[i] + arr2[i] << " ";
	}
}

int main()
{
	srand((unsigned)time(NULL));

	int arr[100], arr2[100], arrLength;

	FillArrayElement(arr, arrLength,arr2);

	cout << "element 1 : ";
	PrintArray(arr, arrLength);

	cout << endl;

	cout << "element 2 : ";
	PrintArray(arr2, arrLength);

	cout << endl;

	cout << "Sum of Arra1 and array2 element is : ";
	SumOfArra1andArra2Element(arr, arrLength, arr2);
	

	return 0;
}