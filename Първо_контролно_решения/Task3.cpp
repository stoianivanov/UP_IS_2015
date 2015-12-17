#include <iostream>

using namespace std;


void Swap(int * a, int * b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}


void SortAndInsert(int arr[], int n, int usedCount, int toInsert)
{

	//bubble sort
	bool isSorted = false;
	for(int i = 0; i < usedCount; ++i)
	{
		if(isSorted) break;
		else
		{
			isSorted = true;
			for(int  j = 0; j < usedCount - 1; ++j)
			{
				if(arr[j] > arr[j + 1])
				{
					isSorted = false;
					Swap(&arr[j],&arr[j+1]);
				}
			}
		}

	} //

	if(n <= usedCount)
	{
		cout << "Not enough space to insert new element." << endl;
		return;
	}

	//find the place of the element we want to insert
	for(int i = 0; i < usedCount; ++i)
	{
		if( i < usedCount && arr[i] <= toInsert && arr[i + 1] >= toInsert)
		{
			//free the position the element will be inserted on
			for(int j = usedCount - 1; j > i; --j)
			{
				arr[j + 1] = arr[j];
			}

			arr[i + 1] = toInsert;

			break; //done
		}

		if(i == usedCount - 1) //if we are here, the element is bigger than the last one, so we put it on the last position
		{
			arr[usedCount] = toInsert;
		}
	}
}


int main()
{
	int a[20] = { 2, 3, 1, 0, 4, 10};

	SortAndInsert(a, 5, 6,  5);

	for(int i = 0; i < 7; ++i)
	{
		cout << a[i] << " ";
	}

	return 0;
}
