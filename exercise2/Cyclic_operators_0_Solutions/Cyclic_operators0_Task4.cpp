#include <iostream>

using namespace std;


int main()
{
	char symbol;

	do //тялото на цикъла се изпълнява, докато не въведем "!", но поне веднъж, тъй като трябва да прочетем въведения
	{									//символ и след това да проверим какъв е
		cin >> symbol;
	}while(symbol != '!');

	cout << "You pressed \"!\"." << endl; // щом цикълът е завршил, значи сме въвели "!"

	return 0;
}
