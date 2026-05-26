#include <iostream>
using namespace std;

long long int ReadPostiveNumber(string message)
{
	long long int Number = 0;

	do
	{
		cout << message << endl;
		cin >> Number;
	} while (Number < 0);
	return Number;
}

long long int ReverseNumber(long long int Number)
{
	int Remainder = 0;
	long long int Number2 = 0;

	while (Number > 0)
	{
		Remainder = Number % 10;
		Number = Number / 10;
		Number2 = Number2 * 10 + Remainder;
	}

	return Number2;
}

void PrintPalindromeNumber(long long int Number)
{
	if (ReverseNumber(Number) == Number)
	{
		cout << "Yes, it is a Palindrome Number." << endl;
	}
	else
	{
		cout << "NO, it is NOT a palindrome Number." << endl;
	}
}

int main()
{
	long long int Number = ReadPostiveNumber("pls enter positive Number?");

	PrintPalindromeNumber(Number);
	return 0;
}