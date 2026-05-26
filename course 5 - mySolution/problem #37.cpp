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

void AddArrayNumbers(int number, int arr[100], int &arrlength)
{
	arrlength++;

	arr[arrlength - 1] = number;
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

void copybyusingAddArrayNumbers(int arr[100],int arr2[100],int &arrlength2,int arrlength)
{
	for (int i = 0; i < arrlength; i++)
	{
	AddArrayNumbers(arr[i],arr2,arrlength2);
	}
}

int main()
{
	int arr[100], arrlength = 0, arrlength2 = 0;

	arrlength = ReadNumber("pls enter a number?");

	FillArrayElement(arr, arrlength);

	int arr2[100];

	copybyusingAddArrayNumbers(arr, arr2, arrlength2,arrlength);

	cout << "element 1 is : ";
	printarray(arr, arrlength);

	cout << "element 2 is : ";
	printarray(arr2, arrlength2);
	return 0;
}