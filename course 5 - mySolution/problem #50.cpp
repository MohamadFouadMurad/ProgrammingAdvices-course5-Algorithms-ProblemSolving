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

float Mysqrt(float number)
{
    return pow(number, 0.5);
}

int main()
{
    float number = ReadNumber("pls enter a number");

    cout << "my sqrt function : " << Mysqrt(number) << endl;
    cout << " sqrt function : " << sqrt(number) << endl;

    return 0;
}
