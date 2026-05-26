#include <iostream>
#include <cstdlib>
using namespace std;

int ReadNumber(string message)
{
	int number = 0;

	do
	{
		cout << message << endl;
		cin >> number;
	} while (number <= 0);

	return number;
}

int RandomNumber(int from, int to)
{

	int randNum = rand() % (to - from + 1) + from;

	//الفروم الي بلاخير مشان مايعطينا صفر والي بالقواس لو تحسبه راح يطلع 
	//نفس قيمة الرقم الاخير الي هو 10 ولوغيرت الارقام بيطلع نفس الرقم الاخير
	return randNum;
}

void FillArrayElement(int arr[100], int arrLength)
{
	for (int i = 0; i < arrLength; i++)
	{
		arr[i] = RandomNumber(1, 100);
	}
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

int FindNumberPosition(int arr[100], int arrlength, int NumberToSearch)
{
	for (int i = 0; i < arrlength; i++)
	{
		if (NumberToSearch == arr[i]) 
		{
			return i;
		}
	}
	return -1;
}

void SearchForNumber(int arr[100],int index)
{
	
	if (index == -1)
	{
		cout << "the number is not found :-(" << endl;
	}
	else
	{
		cout << "the number is found at position : " << index << endl;
		cout << "the number is found its order : " << index + 1 << endl;
	}
	
}

int main()
{
	srand((unsigned)time(NULL));
	int arr[100], arrlength;

	arrlength = ReadNumber("pls enter number of array?");

	FillArrayElement(arr, arrlength);

	printarray(arr, arrlength);

	int Number = ReadNumber("pls enter a number to search for?");
	int index = FindNumberPosition(arr, arrlength, Number);

	cout << "the number you are looking for is : " << Number << endl;

	SearchForNumber(arr, index);

	return 0;
}





















