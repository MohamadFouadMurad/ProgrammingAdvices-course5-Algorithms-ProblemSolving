#include <iostream>
#include <cstdlib>
using namespace std;

enum enRadom 
{ SmallLetter = 1, CapitalLetter = 2, SpecialCharacter = 3, Digit = 4 };

int RandomNumber(int from, int to)
{
	int randNum = rand() % (to - from + 1) + from;

	//الفروم الي بلاخير مشان مايعطينا صفر والي بالقواس لو تحسبه راح يطلع 
	//نفس قيمة الرقم الاخير الي هو 10 ولوغيرت الارقام بيطلع نفس الرقم الاخير
	return randNum;
}

char GetRandomCharacter(enRadom CharType)
{
	switch (CharType)
	{
	case enRadom::SmallLetter:
		return char(RandomNumber(97, 122));
		break;
	case enRadom::CapitalLetter:
		return char(RandomNumber(65, 90));
		break;
	case enRadom::Digit:
		return char(RandomNumber(48, 57));
		break;
	case enRadom::SpecialCharacter:
		return char(RandomNumber(33, 47));
		break;
	}

	return '\0';
}

int ReadNumber(string massage)
{
	int number = 0;

	do
	{
		cout << massage << endl;
		cin >> number;
	} while (number < 0);

	return number;
}

string GeranteWord(enRadom CharType, short length)
{
	string word;


	for (int i = 1; i <= length; i++)
	{
		word = word + GetRandomCharacter(CharType);
	}
	return word;
}

string Generatekey()
{
	string Key = "";

	Key = GeranteWord(enRadom::CapitalLetter, 4) + "-";
	Key = Key + GeranteWord(enRadom::CapitalLetter, 4) + "-";
	Key = Key + GeranteWord(enRadom::CapitalLetter, 4) + "-";
	Key = Key + GeranteWord(enRadom::CapitalLetter, 4);

	return Key;
}

void GenerateKeys(short NumberOfKeys)
{
	for (int i = 1; i <= NumberOfKeys; i++)
	{
		cout << "Key [" << i << "] : " << Generatekey() << endl;
	}
}


int main()
{
	srand((unsigned)time(NULL));

	int Number = ReadNumber("pls enter how many keys to generate?");

	GenerateKeys(Number);


	return 0;
}

