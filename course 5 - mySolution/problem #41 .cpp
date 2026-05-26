#include <iostream>
using namespace std;

void FillArray(int arr[100], int& arrLength)
{
	arrLength = 6;
	arr[0] = 10;
	arr[1] = 20;
	arr[2] = 30;
	arr[3] = 30;
	arr[4] = 20;
	arr[5] = 10;
}

void printarray(int arr[100], int arrlength)
{
	for (int i = 0; i < arrlength; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl << endl;
}

bool isPalindromeArray(int arr[100], int arrlength)
{
	for (int i = 0; i < arrlength; i++)
	{
		if (arr[i] != arr[arrlength - i - 1])
		{
			return false;
		}
	}
	return true;
}


int main()
{
	int arr[100], arrlength = 0;

	FillArray(arr, arrlength);

	cout << "\nArray elements : \n";
	printarray(arr, arrlength);

	if (isPalindromeArray(arr, arrlength))
	{
		cout << "\nyes array is palindrome\n";
	}
	else
	{
		cout << "\nno array is not palindrome.\n";
	}

	return 0;
}
