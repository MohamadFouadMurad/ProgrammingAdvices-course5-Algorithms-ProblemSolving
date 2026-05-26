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

bool CaculatePerfectNumber(int Number)
{
	int sum = 0;
	for (int i = 1; i < Number; i++)
	{
		if (Number % i == 0)
		{
			sum += i;
		}
	}
	return Number == sum;
}

void PrintPerfectNumberFrom1ToN(int Number)
{
	for (int i = 1; i <= Number; i++)
	{
		if (CaculatePerfectNumber(i)) 
		{
			cout << i << endl;
		}
	}
}

int main()
{
	int Number = ReadPositiveNumber("pls enter a positive Number?");

	PrintPerfectNumberFrom1ToN(Number);
	return 0;
}
