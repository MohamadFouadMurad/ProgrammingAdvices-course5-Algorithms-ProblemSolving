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

int MyFloor(float number)
{
    if (number > 0)
    {
        return int(number);
    }
    else
    {
        int(number) - 1;
    }
}

int main() 
{
    float number = ReadNumber("pls enter a number");

    cout << "My floor Function : " << MyFloor(number) << endl;
    cout << "floor Function : " << floor(number) << endl;

    return 0;
	
}
