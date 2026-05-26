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

void PrintDigits(int Number)
{
	int Remainder = 0;

	while (Number > 0)
	{
		Remainder = Number % 10;
		Number = Number / 10;
		cout << Remainder << endl;
	}
}


int main()
{
	PrintDigits(ReadPositiveNumber("pls enter a positive Number?"));

	return 0;
}