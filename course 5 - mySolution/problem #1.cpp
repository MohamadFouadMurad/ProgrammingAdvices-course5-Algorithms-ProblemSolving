#include <iostream>
using namespace std;

void PrintTableHeader()
{
	cout << "\t\t\tMultiplication Table from 1 to 10" << endl << endl;
	cout << "\t";

	for (int i = 1; i <= 10; i++)
	{
		cout << i << "\t";
	}

	cout << endl;
	cout << "\n___________________________________________________________________________________\n";
} 

string ColumSperator(int i)
{
	if (i < 10)
	{
		return "   |";
	}
	else
	{
		return "  |";
	}
}

void PrintMultiplicationTable()
{
	PrintTableHeader();
	
	for (int i = 1; i <= 10; i++)
	{
		cout << " " << i << ColumSperator(i) << "\t";
		for (int j=1;j <=10;j++)
		{
			cout << i * j << "\t";
		}
		cout << endl;
	}
	
}

int main()
{
	PrintMultiplicationTable();
	return 0;
}

