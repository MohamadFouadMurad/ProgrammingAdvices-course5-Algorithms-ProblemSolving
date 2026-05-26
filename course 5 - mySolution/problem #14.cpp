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
	for (int i = 64 + Number; i >= 65; i--)
	{
		for (int j = 64; j < i; j++)
		{
			cout << char(i);
		}
		cout << endl;
	}
}

int main()
{
	PrintInvertedNumberPattern(ReadPostiveNumber("pls enter a Positive Number?"));
	return 0;
}