#include <iostream>
#include <string>
using namespace std;

string ReadText()
{
	string Text;

	cout << "pls enter text?\n";
	getline(cin >> ws,Text);// ws = white space

	return Text;
}

string EncrypText(string Text,short EncryptionKey)
{
	for (int i = 0; i <=Text.length(); i++)
	{
		Text[i] = char((int)Text[i] + EncryptionKey);
	}
	return Text;
}

string DecrypText(string Text,short EncryptionKey)
{
	for (int i = 0; i <= Text.length(); i++)
	{
		Text[i] = char((int)Text[i] - EncryptionKey);
	}
	return Text;
}

int main()
{
	string Text = ReadText();

	const short EncryptionKey = 2;

	string Textafterencryption, Textafterdecryption;

	Textafterencryption = EncrypText(Text, EncryptionKey);
	Textafterdecryption = DecrypText(Textafterencryption, EncryptionKey);

	cout << "Text before Encryption : " << Text << endl;
	cout << "Text After Ecryption : " << Textafterencryption << endl;
	cout << "Text After Decryption : " << Textafterdecryption << endl;

	return 0;
}