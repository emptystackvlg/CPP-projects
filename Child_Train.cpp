#include <iostream>
#include <windows.h>
#include <cstdlib>

using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	int user_result = -1;   // рузультат который ввел пользователь
	int first;	      // первое число
	int second;		 // второе число
	int result;	    // произведение чисел
	int res;	   // запрос на повтор
	int mode;     // режим работы
	int n = 3;	 // счетчик завершения программы 
	int i = 10;  // счетик для режима блиц
	int right = 0;     // счетчик правильных ответов в блиц
	int wrong = 0;    // счетсик неправильных ответов в  блиц
	
	
	
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

	SetConsoleTextAttribute(hConsole, 15);
	cout << "\a\tПривет , я - программа для проверки знания таблицы умножения\t\n";
TryAgain:
		cout << "\aВыберите режим : 1 - обычный , 2 - блиц \n";
		cin >> mode;
		if (mode == 1) {


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
			cout << "- Количество примеров - 10 \n \n";
			cout << "- В конце блица Вам будет показанно количество \n "<< " правильных и неправильных ответов \n\n";
			SetConsoleTextAttribute(hConsole, 15);
			system("pause");
			while (i != 0) {
				system("cls");
				first = rand() % 11;
				second = rand() % 11;
				result = first * second;
				cout << "\a"<< first << " * " << second << " = ? " << "\n\n";
				cin >> user_result;
				if (user_result == result) {
					right += 1;
					i -= 1;
				}
				else if (user_result != result) {
					wrong += 1;
					i -= 1;

				}if (i == 0) {
					cout << "\a\t\t\tБлиц завершён !\t\t\t\n\n";
					cout << " \t\tПо результатам блица : \t\t" << "\n\n";
					SetConsoleTextAttribute(hConsole, 10);
					cout << "Правильных ответов : " << right << " из 10" << "\n\n";
					SetConsoleTextAttribute(hConsole, 12);
					cout << "Неправильных ответов : " << wrong << " из 10" << "\n\n";
					Sleep(2000);
				}
			}
		}
	
		
		
		
		
	SetConsoleTextAttribute(hConsole, 15);
	cout << "\a\nХотите попробовать еще раз ? (1-да , 0-нет) \n";
	cin >> res;
	
	if (res == 1) {
		system ("cls") ;
		cout << "Как скажете , давайте ещё раз \n";
		goto TryAgain;

	}
	
	else if (res == 0) {
		system("cls");
		cout << "\n\aДо свидания ! \n";
		cout << "\n\aЗавершение программы через : \n";
		while (n != 0) {
			cout << n <<"...  ";
			n -= 1;
			Sleep(1000);
			cout << "\t----------------------------------------------------------------\t";
		}
	}
}


