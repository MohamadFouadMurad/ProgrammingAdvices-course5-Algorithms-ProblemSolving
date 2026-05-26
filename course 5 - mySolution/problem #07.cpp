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

void PrintReversedDigits(int Number)
{
	int Remainder = 0;
	int Number2 = 0;

	while (Number > 0)
	{
		Remainder = Number % 10;
		Number = Number / 10;
		Number2 = Number2 * 10 + Remainder;
	}
	
	cout << "the reverse is : " << Number2 << endl;
}


int main()
{
	PrintReversedDigits(ReadPositiveNumber("pls enter a positive Number?"));

	return 0;
}