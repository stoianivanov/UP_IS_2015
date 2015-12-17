#include <iostream>

using namespace std;


#define MAX_SIZE 100

int main()
{
    int n;

    cout << "n = ";
    cin >> n;

	int arr[MAX_SIZE];

	for(int i = 0; i < n; ++i)
	{
		cin >> arr[i];
	}

    int currentElementCount = 0, maxElementCount = 0, mostCommonElement;

    for(int i = 0; i < n; ++i)
	{
		for(int j = 0; j < n; ++j)
		{
			if(arr[i] == arr[j])
			{
				++currentElementCount;
			}
		}

		if(currentElementCount > maxElementCount)
		{
			maxElementCount = currentElementCount;
			mostCommonElement = arr[i];
		}

		currentElementCount = 0;
	}

	cout << "The most common element is " << mostCommonElement <<", it occurs " << maxElementCount << " times.\n";

	return 0;
}
