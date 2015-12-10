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
		int sum = 0;

		for(int i = 0; i <= n; ++i)
		{
			sum += i*i;
		}

		cout << "The sum of squares is " << sum << "." << endl;
	}

	return 0;
}
