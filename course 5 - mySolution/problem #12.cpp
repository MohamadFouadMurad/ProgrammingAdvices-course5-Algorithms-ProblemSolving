#include <iostream>
using namespace std;

int ReadPostiveNumber(string message)
{
	int Number = 0;

	do
	{
		cout << message << endl;
		cin >> Number;
	} while (Number <= 0);
	return Number;
}

void PrintInvertedNumberPattern(int Number)
{
	for (int i = Number;i > 0;i--)
	{
		for (int j = 1; j <= i ; j++)
		{
			cout << i;
		}
		cout << endl;
	}
}

int main()
{
	PrintInvertedNumberPattern(ReadPostiveNumber("pls enter a Positive Number?"));
	return 0;
}