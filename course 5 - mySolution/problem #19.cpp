#include <iostream>
#include <cstdlib>
using namespace std;

int RandomNumber(int from, int to)
{
	int randNum = rand() % (to - from + 1) + from;
	
	//الفروم الي بلاخير مشان مايعطينا صفر والي بالقواس لو تحسبه راح يطلع 
	//نفس قيمة الرقم الاخير ولوغيرت الارقام بيطلع نفس الرقم الاخير
	return randNum;
}

int main()
{
	srand((unsigned)time(NULL));

	cout << rand() << endl;
	cout << rand() << endl;

	cout << "--------------------" << endl;

	cout << RandomNumber(20, 30) << endl;
	cout << RandomNumber(1, 10) << endl;
	return 0;
}