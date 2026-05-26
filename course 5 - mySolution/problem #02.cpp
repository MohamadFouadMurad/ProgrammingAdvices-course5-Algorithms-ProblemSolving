#include <iostream>
#include <string>
using namespace std;

enum enPrimeorNot
{prime=1,NotPrime=2};

int ReadPostiveNumber(string message)
{
	int Number = 0;

	do
	{
		cout << message << endl;
		cin >> Number;
	} while (Number < 0);
	return Number;
}

enPrimeorNot CheckPrime(int Number)
{
	int M = round(Number / 2);

	for (int counter = 2; counter <= M; counter++)
	{
		if (Number % counter == 0)
		{
			return enPrimeorNot::NotPrime;
		}
	}
	return enPrimeorNot::prime;
}

void PrintPrimeNumberFrom1ToN(int Number)
{
	cout << "Prime number from " << 1 << " to " << Number;
	cout << " Are : " << endl;

	for (int i = 1; i <Number; i++)
	{
		if (CheckPrime(i) == enPrimeorNot::prime) 
		{
			cout << i << endl;
		}
	}
}

int main()
{
	PrintPrimeNumberFrom1ToN(ReadPostiveNumber("pls enter positive Number?"));
	return 0;
}