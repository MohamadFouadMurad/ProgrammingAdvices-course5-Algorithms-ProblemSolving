#include <iostream>
#include <cmath>
using namespace std;

float ReadNumber(string message)
{
    float number = 0;
    cout << message << endl;
    cin >> number;
    return number;
}

float GetFractionPart(float number)
{
    return number - int(number);
}

int MyRound(float Number)
{
    int IntPart;
    IntPart = int(Number);

    
    float FractionsPart = GetFractionPart(Number);


    if (abs(FractionsPart) >= 0.5)
    {
       
        if (Number > 0)
        {
            return ++IntPart;
        }
        else
        {
            return --IntPart;
        }
    }
    else
    {
        return IntPart;
    }
}

int main()
{
	float number = ReadNumber("pls enter a number");

	cout << "My Round Function : " << MyRound(number) << endl;
	cout << "Round Function : " << round(number) << endl;

	return 0;
}