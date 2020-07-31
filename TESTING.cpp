#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "rus");
	int user_result;
	int first; 
	int second; 
	int result;
	int res;
	cout << "\a\tПривет , я - программа для проверки знания таблицы умножения\t\n";
	cout << "Введите первое число \n";
	cin >> first;
	cout << "Введите второе число \n";
	cin >> second;

	result = first * second;

	cout << "Введите произведение этих чисел \n";
	cin >> user_result;

	if (user_result == result){
		cout << "Верно! \a \n";
	}
	else if  (user_result != result){
		cout << "Неверно! Стоит повторить таблицу умножения \a \n";
	}
	else {
		cout << "Вы ничего не ввели \a \n";
	}
	cout << "\a\nХотите попробовать еще раз ? (1-да , 0-нет) \n";
	cin >> res ;
	if (res == 1) {
		main();
	}
	else if (res == 0) {
		cout << "\aДо свидания ! \n";
		system("pause");
	
	}
	else {
		return 0;
	}
	
}




