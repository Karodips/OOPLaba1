#include <iostream>
#include <iomanip>

using namespace std;

int main(){
	setlocale(LC_ALL, "Russian");
	int a, b, c, d;
	char ch = '.';
	cout << 1990 << setw(8) << setfill(ch) << 135 << endl
		<< 1991 << setw(8) << 7290 << endl
		<< 1992 << setw(8) << 11300 << endl
		<< 1993 << setw(8) << 16200 << endl;
	system("pause");
	return 0;
}
