#include <iostream>
using namespace std;

string Password()
{
	string Password;

	cout << "pls enter a 3-letter password (all capital)?" << endl;
	cin >> Password;

	return Password;
}

bool GussThePassword(string UserPassword)
{

	string GuessedPassword = "";
	int counter = 0;


	for (int i = 65; i <= 90; i++)
	{
		for (int j = 65; j <= 90; j++)
		{
			for (int n = 65; n <= 90; n++)
			{
				GuessedPassword = GuessedPassword + char(i);
				GuessedPassword = GuessedPassword + char(j);
				GuessedPassword = GuessedPassword + char(n);

				counter++;

				cout << "Trial [ " << counter << " ] : " << GuessedPassword << endl;

				if (UserPassword == GuessedPassword)
				{
					cout << "\nPassword is " << UserPassword << endl;
					cout << "Found after " << counter << " Trials" << endl;
					return true;
				}

				GuessedPassword = "";
			}
		}
	}

	return false;
	cout << "___________________________________________________" << endl;
}

int main()
{
	GussThePassword(Password());
	return 0;
}