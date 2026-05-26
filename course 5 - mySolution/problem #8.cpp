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

int ReadDigitNumber(string massage, int from, int to)
{
	int Number = 0;

	do
	{
		cout << massage << endl;
		cin >> Number;
	} while (Number < from || Number > to);

	return Number;
}

int CountDigitFreq(int Number,int Digittocheck)
{
	int Remainder = 0;
	int frequency = 0;

	while (Number > 0)
	{
		Remainder = Number % 10;
		Number = Number / 10;


		if (Digittocheck == Remainder)
		{
			frequency++;
		}
	}

	return frequency;
}


int main()
{
	int Number = ReadPositiveNumber("pls enter a positive Number?");

	int digittocheck = ReadDigitNumber("pls enter one digit to check?",0,9);

	cout << "digit " << digittocheck << " Frequency is : " << CountDigitFreq(Number, digittocheck) << " times.";

	return 0;
}