#include <iostream>

using namespace std;


int main()
{
	int n;
	cin >> n;

	if(n < 0 || n > 9999)
	{
		cout << "Too big number!" << endl;
	}

	else
	{
		cout << "All even numbers in [0, " << n << "] are:" << endl;

		for(int i = 0; i <= n; ++i)
		{
			if(i % 2 == 0)
			{
				cout << i << " ";
			}
		}

		cout << endl;
	}

	return 0;
}
