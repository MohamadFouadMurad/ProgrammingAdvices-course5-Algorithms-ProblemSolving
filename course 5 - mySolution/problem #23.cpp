#include <iostream>
#include <cstdlib>
using namespace std;

int ReadArrayNumber()
{
	int length = 0;

	do
	{
		cout << "pls enter length of array?" << endl;
		cin >> length;
	} while (length < 0);

	return length;
}

int RandomNumber(int from ,int to)
{
	int Random = rand() % (to - from + 1) + from;

	return Random;
}

void Printarr(int arrLength, int arr[100])
{
	
	for (int i = 0; i < arrLength; i++)
	{
		arr[i] = RandomNumber(1, 100);
		cout <<arr[i] << " ";
	}
}

int main()
{
	srand((unsigned)time(NULL));

	int arr[100], arrLength;

	arrLength = ReadArrayNumber();

	Printarr(arrLength,arr);
        
	return 0;
}