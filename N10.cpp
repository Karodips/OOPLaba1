#include <iostream>
#include <iomanip>

using namespace std;

int main(){
	setlocale(LC_ALL, "Russian");
	int funt, shirl, pens;
	cin >> funt >> shirl >> pens;
	pens = pens + shirl * 12 + funt * 240;
	cout << pens - pens % 100 << "." << pens % 100;
	system("pause");
	return 0;
}
