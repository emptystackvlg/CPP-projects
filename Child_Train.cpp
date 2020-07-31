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
	cout << "\a\tПривет , я - программа для проверки знания таблицы умножения\t\n";
	
	TryAgain:
		cout << "Введите первое число \n";
		cin >> first;

		cout << "Введите второе число \n";
		cin >> second;

		result = first * second;

		cout << "Введите произведение этих чисел \n";
		cin >> user_result;

		if (user_result == result) {
			cout << "Верно! \a \n";
		}
		else if (user_result != result) {
			cout << "\nНеверно! Стоит повторить таблицу умножения \a \n" << "Правильный ответ : " << result << "\n";
		}
		else {
			cout << "Вы ничего не ввели \a \n";
		}
	cout << "\a\nХотите попробовать еще раз ? (1-да , 0-нет) \n";
	cin >> res;
	
	if (res == 1) {
		system("cls");
		goto TryAgain;
	}
	
	else if (res == 0) {
		cout << "\aДо свидания ! \n";
		Sleep(2000);

	}

}


