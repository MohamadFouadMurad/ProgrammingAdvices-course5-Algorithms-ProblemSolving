#include <iostream>
#include <cmath>
using namespace std;

float GetFractionPart(float number)
{
    return number - int(number);
}

float ReadNumber(string message)
{
    float number = 0;
    cout << message << endl;
    cin >> number;
    return number;
}

int Myceil(float number)
{
    if (abs(GetFractionPart(number)) > 0)
    {
        if (number > 0)
        {
            return int(number) + 1;
        }
        else
        {
            return int(number);
        }
    }
    else
    {
        return number;
    }
}

int main()
{
    float number = ReadNumber("pls enter a number");

    cout << "My ceil Function : " << Myceil(number) << endl;
    cout << "ceil Function : " << ceil(number) << endl;

    return 0;

}
