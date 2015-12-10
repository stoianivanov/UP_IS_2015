#include <iostream>

using namespace std;


int main()
{
	char symbol;
	cin >> symbol;

    int number;

	//работим с ASCI кодовете на символите, когато ги сравняваме или извършваме аритметични операции с тях
    switch(symbol)
    {
		case '0': case '1': case '2': case '3': case '4':
		case '5': case '6' :case '7': case '8': case '9':
			number = symbol - '0';
			cout << "It's a digit. Its square is " << number * number << "." << endl; break;
		default:
			if(symbol >= 'A' && symbol <= 'z')
			{
				cout << "It's a letter." << endl;
			}

			else
			{
				cout << "Symbol, other that letter or a digit." << endl;
			}

    }

	return 0;
}
