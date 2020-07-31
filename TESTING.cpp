#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	int user_result;  // рузультат который ввел пользователь
	int first;	     // первое число
	int second;		// второе число
	int result;	   // произведение чисел
	int res;	  // запрос на повтор
	int n = 3;	 // счетчик завершения программы 
	
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

	SetConsoleTextAttribute(hConsole, 15);
	cout << "\a\tПривет , я - программа для проверки знания таблицы умножения\t\n";

	TryAgain:
		cout << "\nВведите первое число \n";

		SetConsoleTextAttribute(hConsole, 11);
		cin >> first;

		SetConsoleTextAttribute(hConsole, 15);
		cout << "\nВведите второе число \n";

		SetConsoleTextAttribute(hConsole, 13);
		cin >> second;

		result = first * second;

		SetConsoleTextAttribute(hConsole, 15);
		cout << "\nВведите произведение этих чисел \n";
		
		SetConsoleTextAttribute(hConsole, 14);
		cin >> user_result;

		if (user_result == result) {
			SetConsoleTextAttribute(hConsole, 10);
			cout << "\nВерно! \a \n";
		}
		else if (user_result != result) {
			SetConsoleTextAttribute(hConsole, 12);
			cout << "\n\nНеверно! Стоит повторить таблицу умножения \a \n\n";
			SetConsoleTextAttribute(hConsole, 10);
			cout<< "Правильный ответ : ";
			SetConsoleTextAttribute(hConsole, 11);
			cout << result <<endl;
		}
		else {
			cout << "Вы ничего не ввели \a \n";
		}
	SetConsoleTextAttribute(hConsole, 15);
	cout << "\a\nХотите попробовать еще раз ? (1-да , 0-нет) \n";
	cin >> res;
	
	if (res == 1) {
		system ("cls") ;
		cout << "Как скажешь , давай ещё раз \n";
		goto TryAgain;
	}
	
	else if (res == 0) {
		cout << "\n\aДо свидания ! \n";
		cout << "\n\aЗавершение программы через : \n";
		while (n != 0) {
			cout << n <<"...\n";
			n -= 1;
			Sleep(1000);

		}
		
	}

}


