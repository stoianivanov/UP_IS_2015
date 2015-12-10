#include <iostream>

using namespace std;


int main()
{
	int month;
	cin >> month;

	switch(month)
	{
		case 1: case 2: case 3: cout << "It's winter!" << endl; break;
		case 4: case 5: case 6: cout << "It's spring!" << endl; break;
		case 7: case 8: case 9: cout << "It's summer!" << endl; break;
		case 10: case 11: case 12: cout << "It's autumn!" << endl; break;
		default:
			cout << "There's no month with that number!" << endl;
	}

	return 0;
}
