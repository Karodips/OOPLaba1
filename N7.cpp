#include <iostream>

using namespace std;

int main(){
	setlocale(LC_ALL, "Russian");
	double celsius;
	cin >> celsius;
	cout << celsius*9 / 5 + 32;
	system("pause");
	return 0;
}
