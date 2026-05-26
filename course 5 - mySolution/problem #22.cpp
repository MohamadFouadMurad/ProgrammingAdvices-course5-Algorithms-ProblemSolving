#include <iostream>
using namespace std;

int ReadArrayNumber(string massage)
{
	int Number = 0;

	do
	{
		cout << massage << endl;
		cin >> Number;
	} while (Number < 0);

	return Number;
}

void ReadArray(int arr[100], int& arrLength)
{
	cout << "enter Number of elements: " << endl;
	cin >> arrLength;

	cout << "enter array element: " << endl;
	for (int i = 0; i < arrLength; i++)
	{
		cout << "element [" << i + 1 << "] : ";
		cin >> arr[i];
	}
	cout << endl;
}

void PrintArray(int arr[100], int arrLength)
{
	for (int i = 0; i < arrLength; i++)
	{
		cout << arr[i] << "";
	}
	cout << endl;
}

int TimeRepeated(int Number, int arr[100], int arrLength)
{
	int counter = 0;

	for (int i = 0; i < arrLength; i++)
	{
		if (Number == arr[i])
		{
			counter++;
		}
	}

	return counter;
}



int main()
{
	int arr[100], arrLength, NumberToCheck;


	ReadArray(arr, arrLength);


	NumberToCheck = ReadArrayNumber("pls enter array elements?");

	cout << "original array : ";
	PrintArray(arr, arrLength);
	

	cout << "Number " << NumberToCheck << " is repeated : " << TimeRepeated(NumberToCheck,arr,arrLength) << " times";

	return 0;
}