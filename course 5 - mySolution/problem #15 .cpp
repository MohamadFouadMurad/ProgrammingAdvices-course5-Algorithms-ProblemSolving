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

void PrintLetterInPattern(int number)
{
	for (int i = 65; i <= 65 + number -1; i++)
	{
		for (int j = 65;j<=i;j++)
		{
			cout << char(i);
		}
		cout << endl;
	}
}


int main()
{
	PrintLetterInPattern(ReadPostiveNumber("pls enter a Positive Number?"));
	return 0;
}