#include <iostream>

using namespace std;

int main(){
	setlocale(LC_ALL, "Russian");
	double dollar;
	cin >> dollar;
	cout << "Фунтов: " << dollar*(1/1.1487) << " Немецких марок: " << dollar*(1/0.584) << " Йен: " << dollar*(1/0.00955) << " Франков: " << dollar*(1/0.172) << endl;
	system("pause");
	return 0;
}
