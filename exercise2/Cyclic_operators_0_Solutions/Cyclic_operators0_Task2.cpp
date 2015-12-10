#include <iostream>

using namespace std;


int main()
{
	int n;
	cin >> n;

	if(n < 5 || n > 20)
	{
		cout << "Incorrect input!" << endl;
	}

	else
	{
		if(n % 2 == 0)//четно
		{
			cout << "Even number." << endl;
		}

		else //нечетно
		{
			switch(n)
			{	//изброяваме нечетните прости числа от 5 до 20
				case 5: case 7: case 11: case 13: case 17: case 19:
					cout << "Odd prime number." << endl; break;
				default: //по подразбиране, чистрото е нечетно, но не просто
					cout << "Odd, but not prime number." << endl;
			}
		}
	}

	return 0;
}
