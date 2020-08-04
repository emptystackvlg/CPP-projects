#include <iostream>
#include <windows.h>
#include <cstdlib>
#include <stdio.h>
#include <time.h>

using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	int user_result = -1;   // рузультат который ввел пользователь
	int first;	       // первое число
	int second;		  // второе число
	int result;	     // произведение чисел
	int res;	    // запрос на повтор
	int mode;      // режим работы
	int n = 3;	  // счетчик завершения программы 
	int i = 10;  // счетик для режима блиц
	int right = 0;     // счетчик правильных ответов в блиц
	int wrong = 0;    // счетчик неправильных ответов в  блиц
	
	
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

	SetConsoleTextAttribute(hConsole, 15);
  

	cout << "\a\tПривет , я - программа для проверки знания таблицы умножения\t\n" << "\n\n";
TryAgain:
		cout << "\aВыберите режим : 1 - обычный , 2 - блиц \n" << "\n";
		cout << "> ";
		cin >> mode;
		if (mode == 1) {


			cout << "\nВведите первое число \n";

			SetConsoleTextAttribute(hConsole, 11);
			cout << "\n";
			cout << "> ";
			cin >> first;

			SetConsoleTextAttribute(hConsole, 15);
			cout << "\nВведите второе число \n";

			SetConsoleTextAttribute(hConsole, 13);
			cout << "\n";
			cout << "> ";
			cin >> second;

			result = first * second;

			SetConsoleTextAttribute(hConsole, 15);
			cout << "\nВведите произведение этих чисел \n";

			SetConsoleTextAttribute(hConsole, 14);
			cout << "\n";
			cout << "> " ;
			cin >> user_result;

			if (user_result == result) {
				SetConsoleTextAttribute(hConsole, 10);
				cout << "\nВерно! \a \n";
			}
			else if (user_result != result) {
				SetConsoleTextAttribute(hConsole, 12);
				cout << "\n\nНеверно! Стоит повторить таблицу умножения \a \n\n";
				SetConsoleTextAttribute(hConsole, 10);
				cout << "Правильный ответ : ";
				SetConsoleTextAttribute(hConsole, 11);
				cout << result << endl;
			}
		}
		
		
		else if (mode == 2) {
			i = 10;
			right = 0;
			wrong = 0;
			SetConsoleTextAttribute(hConsole, 15);
			cout << "\a Правила блица : \n\n";
			SetConsoleTextAttribute(hConsole, 13);
			cout << "- Вам будут даны два случайных числа , Ваша задача - ввести их произведение\n\n";
			cout << "- В конце блица Вам будет показано количество \n "<< " правильных и неправильных ответов \n\n";
			SetConsoleTextAttribute(hConsole, 15);
			cout << "Введите количество примеров : \n \n";
			cout << "> ";
			cin >> i;
			cout << "\n\n";
			int c;
			c = i;
			system("pause");

			while (i != 0) {
				system("cls");
				srand(time(NULL));
				first = rand() % 10 + 1;
				second = rand() % 10 + 1;
				result = first * second;
				cout << "\a"<< first << " * " << second << " = ? " << "\n\n";
				cout << "> ";
				cin >> user_result;
				i -= 1;
				if (user_result == result) {
					right += 1;
				}
				else if (user_result != result) {
					wrong += 1;

				}if (i == 0) {
					cout << "\a\t\t\tБлиц завершён !\t\t\t\n\n";
					cout << " \t\tПо результатам блица : \t\t" << "\n\n";
					SetConsoleTextAttribute(hConsole, 10);
					cout << "Правильных ответов : " << right << " из " << c << "\n\n";
					SetConsoleTextAttribute(hConsole, 12);
					cout << "Неправильных ответов : " << wrong << " из " << c << "\n\n";
					Sleep(500);
				}
			}
		}
	
		
		
		
		
	SetConsoleTextAttribute(hConsole, 15);
	cout << "\a\nХотите попробовать еще раз ? (1-да , 0-нет) \n";
	cout << "\n";
	cout << "> ";
	cin >> res;
	
	if (res == 1) {
		system ("cls") ;
		cout << "Как скажете , давайте ещё раз \n" << "\n";
		goto TryAgain;

	}
	
	else if (res == 0) {
		system("cls");
		cout << "\n\aДо свидания ! \n";
		cout << "\n\aЗавершение программы через : \n";
		cout << "\n";
		while (n != 0) {
			cout << n <<"...  ";
			n -= 1;
			Sleep(1000);
			cout << "\t----------------------------------------------------------------\t";
			cout << "\n";
		}
	}
}


