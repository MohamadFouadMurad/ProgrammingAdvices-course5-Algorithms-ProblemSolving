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
	case enRadom::CapitalLetter:
		return char(RandomNumber(65, 90));
	case enRadom::Digit:
		return char(RandomNumber(48, 57));
	case enRadom::SpecialCharacter:
		return char(RandomNumber(33, 47));
	default:
		return '\0';
	}
}

int main()
{
	srand((unsigned)time(NULL));

	cout << "Small Letter = " << GetRandomCharacter(enRadom::SmallLetter) << endl;
	cout << "Capital Letter = " << GetRandomCharacter(enRadom::CapitalLetter) << endl;
	cout << "Special Letter = " << GetRandomCharacter(enRadom::SpecialCharacter) << endl;
	cout << "Digits = " << GetRandomCharacter(enRadom::Digit) << endl;
	return 0;
}