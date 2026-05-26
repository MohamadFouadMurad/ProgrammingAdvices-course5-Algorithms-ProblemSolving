#include <iostream>
using namespace std;

int ReadPositiveNumber(string massage)
{
	int Number = 0;

	do
	{
		cout << massage << endl;
		cin >> Number;
	} while (Number <= 0);

	return Number;
}

bool IsPerfectNumber(int Number)
{
	int sum = 0;

	for ( int i = 1; i < Number; i++)
	{
		if (Number % i == 0)
		{
			sum += i;
		}
	}
	return Number == sum;
}

void CheckPerfectNumber(int Number)
{
	if (IsPerfectNumber(Number))
	{
		cout << Number << " is perfect.";
	}
	else
	{
		cout << Number << " is not perfect.";
	}
}

int main()
{
	int Number = ReadPositiveNumber("pls enter a positive Number?");

	CheckPerfectNumber(Number);
	return 0;
}