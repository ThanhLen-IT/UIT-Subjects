#include "PhanSo.h"

int main() {
	PhanSo a, b, c;
	cout << "Nhap phan so thu 1: "<<endl;
	cin >> a;
	cout << "Nhap phan so thu 2: "<<endl;
	cin >> b;
	c = 5 + b - a * 3 + b / 2;
	cout << "5 + " << b << " - " << a << " x 3 + " << b << " : 2 = " << c;
	cout << endl;
	if (c > 3) {
		cout << c << " > 3 " << endl;
	}
	else {
		cout << c << " < 3" << endl;
	}
	return 0;
}