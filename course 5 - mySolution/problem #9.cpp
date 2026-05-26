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

int CountDigitFreq(int Number, int Digittocheck)
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

void PrintAllDigitNumber(int Number)
{
	int DigitFrequency = 0;


	for (int i = 0; i < 10; i++)
	{
		int DigitFrequency = CountDigitFreq(Number, i);

		if (DigitFrequency > 0)
		{
			cout << "digit " << i << " Frequency is " << DigitFrequency << " times." << endl;
		}
	}
}


int main()
{
	int Number = ReadPositiveNumber("pls enter a positive Number?");

	PrintAllDigitNumber(Number);
}