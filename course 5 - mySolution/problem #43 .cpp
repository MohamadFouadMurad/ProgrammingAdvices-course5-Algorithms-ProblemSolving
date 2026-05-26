#include <iostream>
#include <time.h>
using namespace std;

int RandomNumber(int from, int to)
{
	int random = rand() % (to - from + 1) + from;

	return random;
}

void fillarraywithRandomNumber(int arr[100], int& arrlength)
{
	cout << "pls enter number of arrlength : " << endl;
	cin >> arrlength;

	for (int i = 0; i < arrlength; i++)
	{
		arr[i] = RandomNumber(1, 100);
	}
}

void printarray(int arr[100], int arrlength)
{
	for (int i = 0; i < arrlength; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl << endl;
}

int evencount(int arr[100], int arrlength)
{
	int counter = 0;

	for (int i = 0; i < arrlength; i++)
	{
		if (arr[i] % 2 == 0)
		{
			counter++;
		}
	}
	return counter;
}


int main()
{
	srand((unsigned)time(NULL));

	int arr[100], arrlength;

	fillarraywithRandomNumber(arr, arrlength);

	cout << "array elements: ";
	printarray(arr, arrlength);

	cout << "odd number count is : ";
	cout << evencount(arr, arrlength) << endl;

}