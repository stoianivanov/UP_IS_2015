/* Решение на задачата от консултацията, в която искаме да отпечатаме следния триъгълник
(Пример с n = 16):
	1
	2 3
	4 5 6
	7 8 9 10
	11 12 13 14 15
	16 *  *  *  *  *

*/

#include <iostream>

using namespace std;


int main()
{
    int n; //последното число, което искаме да се отпечата
    cin >> n;

	int currentNumber = 1; //тук имаме стойтостта на числото, което предстои да отпечатаме
    int i; //брояч, който ще използваме за цикъла, с който ще отпечатваме определен брой числа на всеки ред
    int numbersOnRow = 0; //брой на елементите, които искаме да отпечатаме на текущия ред
    bool doneWithTheNumbers = false; //булева променлива, която казва дали сме отпечатали всички необходими числа

    while(!doneWithTheNumbers)
	{
		++numbersOnRow; //на всеки следващ ред имаме с едно число повече отколкото на предишния
		for(i = 0; i < numbersOnRow; ++i)
		{
			if(currentNumber > n) //ако това е така, вече сме отпечатали всички необходими числа
			{
				doneWithTheNumbers = true; //значи сме готови с отпечатването на числата
				break; // и спираме дотук с числата на последния ред, в последстви и излизаме и от while-цикъла
			}

			cout << currentNumber++ << ' '; //ако не сме достигнали последното число, то отпечатваме текущото
											//и след отпечатването му стойността му ще бъде увеличена с 1
		}

		if(!doneWithTheNumbers) cout << endl;
	}

	if(i != 0) //ако i e 0, то последното отпечатано число е отпечатано в края на реда
			   //и няма нужда да отпечатваме * за запълване
	{
		for( ; i < numbersOnRow; ++i) //тук i,която с тази цел направихме видима извън цикъла,
									  //има стойност позицията от последния ред, до която сме стигнали след
									  //след отпечатването на последното число, затова сега продължаваме от нея
		{
			cout << " * ";
		}
	}
	cout << endl;

	return 0;
}
