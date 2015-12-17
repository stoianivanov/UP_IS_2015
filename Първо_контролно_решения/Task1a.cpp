#include <iostream>
#include <cmath>

using namespace std;


int main()
{
	int n, count = 0;
	float x1, x2, y1, y2, r1, r2;

	cout << "n = ";
	cin >> n;

	for(int i = 0; i < n; ++ i)
	{
		cout << "Enter coordinates of the center and radius for the first circle:\n";
		cin >> x1 >> y1 >> r1;

		cout << "Enter coordinates of the center and radius for the second circle:\n";
		cin >> x2 >> y2 >> r2;

		float d = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));

		if(d < r1 + r2)
		{
            ++count;
		}
	}

	cout << count << " pair(s) of intersecting circles were entered.\n";

	return 0;
}
