#include <iostream>
#include <ctype.h>

using namespace std;

int main(){
	setlocale(LC_ALL, "Russian");
	char c;
	cin >> c;
	cout << islower(c) << endl;
	system("pause");
	return 0;
}
