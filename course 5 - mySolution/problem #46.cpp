#include <iostream>
#include <time.h>
using namespace std;

int ReadNumber(string message)
{
	int number = 0;

	do
	{
		cout << message << endl;
		cin >> number;
	} while (number == 0);

	return number;
}

int Myabs(float number)
{
	if (number >= 0)
	{
		return number;
	}
	else
	{
		return number * -1;
	}
}

int main()
{
	int number = ReadNumber("pls enter a number?");

	cout << "My Abs = " << Myabs(number) << endl;
	cout << "Abs function = " << abs(number) << endl;
	return 0;
}