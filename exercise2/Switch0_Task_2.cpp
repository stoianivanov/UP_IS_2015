#include <iostream>

using namespace std;


int main()
{
    int n;

    cin >> n;

    cout << n << (n % 2 == 0 ? " is" : " is not") << " divided by 2." << endl;
    cout << n << (n % 3 == 0 ? " is" : " is not") << " divided by 3." << endl;
    cout << n << (n % 4 == 0 ? " is" : " is not") << " divided by 4." << endl;
    cout << n << (n % 5 == 0 ? " is" : " is not") << " divided by 5." << endl;
    cout << n << (n % 6 == 0 ? " is" : " is not") << " divided by 6." << endl;
    cout << n << (n % 7 == 0 ? " is" : " is not") << " divided by 7." << endl;
    cout << n << (n % 8 == 0 ? " is" : " is not") << " divided by 8." << endl;
    cout << n << (n % 9 == 0 ? " is" : " is not") << " divided by 9." << endl;
    cout << n << (n % 10 == 0 ? " is" : " is not") << " divided by 10." << endl;

    return 0;
}
