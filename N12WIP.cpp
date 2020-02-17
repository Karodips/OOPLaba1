#include <iostream>

using namespace std;

int main(){
	setlocale(LC_ALL, "Russian");
	float DecPounds, DecPens;
	int pounds, pens, shilling;
	cin >> DecPounds;
	DecPens = ceil(DecPounds * 240);
	pounds = static_cast<int>(DecPounds);
	shilling = (DecPens - DecPens % 12) / 12;
	pens = DecPens % 12;
	//cout << pens << "." << shilling << "." << pounds;
	system("pause");
	return 0;
}
