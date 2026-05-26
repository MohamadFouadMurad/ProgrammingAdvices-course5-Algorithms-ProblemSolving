#include <iostream> 
using namespace std;

int ReadNumber()
{
	int number = 0;

	cout << "\npls enter a number? ";
	cin >> number;
	cout << endl;

	return number;
} 

void AddArrayNumbers(int number,int &arrlength,int arr[100])
{
	arrlength++;

	arr[arrlength - 1] = number;
}

void InputUserNumberInArray(int arr[100], int& arrlength)
{
	bool more = true;

	do
	{
		AddArrayNumbers(ReadNumber(), arrlength, arr);

		cout << "do you want to countinue ? [1]yes,[0]no? ";
		cin >> more;
	} while (more);

}

void PrintArray(int arr[100],int arrlength)
{
	for (int i = 0; i < arrlength; i++)
	{
		cout << arr[i] << " ";
	}
}

int main()
{
	int arr[100], arrlength = 0;

	InputUserNumberInArray(arr, arrlength);

	cout << "\nArray length : " << arrlength << endl;
	cout << "Array element : ";
	PrintArray(arr, arrlength);

	return 0;
}