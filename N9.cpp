#include <iostream>

using namespace std;

int main(){
	setlocale(LC_ALL, "Russian");
	int a, b, c, d;
	char ch;
	cin >> a >> ch >> b;
	cin >> c >> ch >> d;
	cout << a*d + c*b << ch << b*d;
	system("pause");
	return 0;
}
