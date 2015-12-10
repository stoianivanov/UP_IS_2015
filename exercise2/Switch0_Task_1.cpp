#include <iostream>

using namespace std;


int main()
{
    char operation;
    int a, b, result;

    cin >> operation >> a >> b;

    switch(operation)
    {
    	case '+': cout << a + b; break;
    	case '-': cout << a - b; break;
    	case '*': cout << a * b; break;
    	case '/': cout << a / b; break;
    	case '%': cout << a % b; break;
    	default: cout << "Error - no such operation" << endl;
    }

    return 0;
}
