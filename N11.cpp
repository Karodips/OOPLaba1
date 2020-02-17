#include <iostream>
#include <iomanip>

using namespace std;

int main(){
	setlocale(LC_ALL, "Russian");
	cout << "Фамилия" << setw(8) << "Имя" << setw(12) << "Адрес" << setw(14) << "Город" << endl;
	cout << endl << setiosflags(ios::left) << setw(10) << "Петров" << setw(10) << "Василий" << setw(16) << "Кленовская 16" << "Санкт-Петербург" << endl <<
		setw(10) << "Иванов" << setw(10) << "Сергей" << setw(16) << "Осиновая 3" << "Находка" << endl <<
		setw(10) <<"Сидоров" << setw(10) << "Иван" << setw(16) << "Березовая 21" << "Калининград" << endl;
	system("pause");
	return 0;
}
