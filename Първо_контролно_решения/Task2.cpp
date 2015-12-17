#include <iostream>

using namespace std;

#define MAX_SIZE 100


int main()
{
    int matrix[MAX_SIZE][MAX_SIZE];

    int n, m;

    cout << "n = ";
    cin >> n;
    cout << "m = ";
    cin >> m;

	int currentNumber = 1;

    for(int i = 0; i < n; ++i)
	{
		for(int j = 0; j < m; ++j)
		{
			matrix[i][j] = currentNumber++;

			cout << matrix[i][j] << " ";
		}

		cout << endl;
	}

	return 0;
}
