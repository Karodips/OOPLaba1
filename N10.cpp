#include <iostream>
#include <iomanip>

using namespace std;

int main(){
	setlocale(LC_ALL, "Russian");
	int funt, shirl, pens;
	double FormatNew;
	cin >> funt >> shirl >> pens;
	FormatNew = pens + shirl * 12 + funt * 240;
	cout << FormatNew/240;
	system("pause");
	return 0;
}
