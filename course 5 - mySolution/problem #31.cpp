 #include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int ReadPositiveNumber(string massage)
{
	int number;

	do
	{
		cout << massage << endl;
		cin >> number;
		if (number < 0)
		{
			cout << "wrong number, ";
		}
	} while (number < 0);
	return number;
}

void swap(int& a, int& b)
{
	int temp;

	temp = a;
	a = b;
	b = temp;
}

int RandomNumber(int from, int to)
{
	int random = rand() % (to - from + 1) + from;
	return random;
}

void FillArrayElement(int arr[100], int arrLength)
{
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

void ShuffleNumber(int arr[100], int arrlength)
{
	for (int i = 0; i < arrlength; i++)
	{
		swap(arr[RandomNumber(1, arrlength) - 1], arr[RandomNumber(1, arrlength) - 1]);
	}
}

int main()
{
	srand((unsigned)time(NULL));
	

	int arr[100];
	int arrlength = ReadPositiveNumber("pls enter a number");

	FillArrayElement(arr, arrlength);

	cout << "Array elements before shuffle: ";
	PrintArray(arr, arrlength);
	cout << endl;

	ShuffleNumber(arr,arrlength);

	cout << "Array element after shuffle: ";
	PrintArray(arr, arrlength);

}