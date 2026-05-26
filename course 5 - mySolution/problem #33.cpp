#include <iostream>
#include <cstdlib>
using namespace std;


enum enRadom
{
	SmallLetter = 1, CapitalLetter = 2 // خليت رقم 2 لانه بصير فينك تعملهم سمول ليترز
};

int RandomNumber(int from, int to)
{

	int randNum = rand() % (to - from + 1) + from;

	//الفروم الي بلاخير مشان مايعطينا صفر والي بالقواس لو تحسبه راح يطلع 
	//نفس قيمة الرقم الاخير الي هو 10 ولوغيرت الارقام بيطلع نفس الرقم الاخير
	return randNum;
}

int ChoiceTypeOfWord(string massage)
{
	int choice;
	do
	{
		cout << massage << endl;
		cin >> choice;
	} while (choice < 1 || choice >2);

	return choice;
}

char GetRandomCharacter(enRadom CharType)
{
	switch (CharType)
	{
	case enRadom::SmallLetter:
		return char(RandomNumber(97, 122));
	case enRadom::CapitalLetter:
		return char(RandomNumber(65, 90));
	default:
		return '0';
	}
}

int ReadNumber(string massage)
{
	int number = 0;

	do
	{
		cout << massage << endl;
		cin >> number;
	} while (number <= 0);

	return number;
}

string GeranteWord(enRadom CharType, short length)
{
	string word;


	for (int i = 1; i <= length; i++)
	{
		word += GetRandomCharacter(CharType);
	}
	return word;
}

string Generatekey(enRadom CharType)
{
	string Key = "";

	for (int i = 1; i <= 4; i++)
	{
		Key += GeranteWord(CharType, 4);

		if (i < 4)
		{
			Key += "-";
		}
	}

	/* you can do this but the top is better
	Key = GeranteWord(enRadom::CapitalLetter, 4) + "-";
	Key = Key + GeranteWord(enRadom::CapitalLetter, 4) + "-";
	Key = Key + GeranteWord(enRadom::CapitalLetter, 4) + "-";
	Key = Key + GeranteWord(enRadom::CapitalLetter, 4);
	*/

	return Key;
}

string ColumSperator(int i)
{
	if (i >= 10)
	{
		return " :";
	}
	else
	{
		return "  :";
	}
}

void GenerateKeys(int TotalKeys, enRadom CharType)
{
		cout << Generatekey(CharType);	
}

void FillArrayElement(int arr[100], int& arrLength)
{
	for (int i = 0; i < arrLength; i++)
	{
		arr[i] = RandomNumber(1, 100);
	}
}

void PrintArray(int arr[100], int arrlength,enRadom CharType)
{
	for (int i = 0; i < arrlength; i++)
	{
		cout <<"Array [" << i + 1 << "] " << ColumSperator(i + 1);
		GenerateKeys(arrlength, CharType);
		cout << endl;
	}
}


int main()
{
	srand((unsigned)time(NULL));
	
	int arr[100];

	int TotalKeys = ReadNumber("pls enter how many keys to generate?");
	int ChoiceType = ChoiceTypeOfWord("pls enter the type of the key?(Small Letter =1,Capital Letter =2)");

	enRadom SelectedType = (enRadom)ChoiceType;

	FillArrayElement(arr, TotalKeys);

	PrintArray(arr, TotalKeys, SelectedType);

	return 0;
}