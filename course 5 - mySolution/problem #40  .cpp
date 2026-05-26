#include <iostream>
using namespace std;

void FillArray(int arr[100], int& arrlength)
{
	arrlength = 10;
	arr[0] = 10;
	arr[1] = 10;
	arr[2] = 10;
	arr[3] = 50;
	arr[4] = 50;
	arr[5] = 70;
	arr[6] = 70;
	arr[7] = 70;
	arr[8] = 70;
	arr[9] = 90;
}

void printarray(int arr[100], int arrlength)
{
	cout << "array element is : " << endl;
	for (int i = 0; i < arrlength; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl << endl;
}

short FindNumberPositionInArray(int Number, int arr[100], int arrLength)
{
	for (int i = 0; i < arrLength; i++)
	{
		if (arr[i] == Number)
			return i;
	}
	return -1;
}

bool IsNumberInArray(int Number, int arr[100], int arrLength)
{
	return FindNumberPositionInArray(Number, arr, arrLength) != -1;
}

void AddArrayNumbers(int number, int arr[100], int& arrlength)
{
	arrlength++;

	arr[arrlength - 1] = number;
}

void CopyDistinctNumbersToArray(int arr[100], int arr2[100], int arrLength, int& arrLength2)
{
	for (int i = 0; i < arrLength; i++)
	{
		if (!IsNumberInArray(arr[i], arr2, arrLength2))
		{
			AddArrayNumbers(arr[i], arr2, arrLength2);
		}
	}
}

int main()
{
	int arr[100], arr2[100], arrlength = 0, arrlength2 = 0;

	FillArray(arr, arrlength);

	cout << "element 1 is : ";
	printarray(arr, arrlength);

	CopyDistinctNumbersToArray(arr, arr2, arrlength, arrlength2);

	cout << "element 2 is : ";
	printarray(arr2, arrlength2);
	return 0;
}