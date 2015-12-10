#include <iostream>

using namespace std;


int main()
{
	int day;
	cin >> day;

	switch(day)
	{
		case 1: case 2: case 3: case 4: case 5:
			cout << "It's a work day!" << endl; break;
		case 6: case 7: cout << "It's weekend!" <<endl; break;
		default:
			cout << "No day with such number!" <<endl;
	}

	return 0;
}
