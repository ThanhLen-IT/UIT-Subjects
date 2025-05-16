#include "PhanSo.h"

PhanSo::PhanSo(int iTu, int iMau) {
	this->iTu = iTu;
	this->iMau = iMau;
	rutGon();
}
istream& operator>>(istream& is, PhanSo& a) {
	do {
		cout << "Nhap tu so: ";
		is >> a.iTu;
		cout << "Nhap mau so: ";
		is >> a.iMau;
	} while (a.iMau == 0);
	return is;
}
ostream& operator<<(ostream& os, PhanSo a) {
	if (a.iMau == 0) {
		os << "Loi: mau = 0!";
	}
	else if (a.iTu == 0) {
		os << 0;
	}
	else if (a.iMau == 1) {
		os << a.iTu;
	}
	else {
		os << a.iTu << "/" << a.iMau;
	}
	return os;
}


int PhanSo::UCLN(int a, int b) {
	a = abs(a);
	b = abs(b);
	while (b != 0) {
		int temp = b;
		b = a % b;
		a = temp;
	}
	return a;
}
void PhanSo::rutGon() {
	if (iMau == 0) return;
	int ucln = UCLN(iTu, iMau);
	iTu /= ucln;
	iMau /= ucln;
	if (iMau < 0) {
		iMau = -iMau;
		iTu = -iTu;
	}
}


PhanSo operator+(PhanSo a, PhanSo b) {
	PhanSo tong;
	tong.iTu = a.iTu * b.iMau + b.iTu * a.iMau;
	tong.iMau = a.iMau * b.iMau;
	tong.rutGon();
	return tong;
}
PhanSo operator-(PhanSo a, PhanSo b) {
	PhanSo hieu;
	hieu.iTu = a.iTu * b.iMau - b.iTu * a.iMau;
	hieu.iMau = a.iMau * b.iMau;
	hieu.rutGon();
	return hieu;
}
PhanSo operator*(PhanSo a, PhanSo b) {
	PhanSo tich;
	tich.iTu = a.iTu * b.iTu;
	tich.iMau = a.iMau * b.iMau;
	tich.rutGon();
	return tich;
}
PhanSo operator/(PhanSo a, PhanSo b) {
	PhanSo thuong;
	thuong.iTu = a.iTu * b.iMau;
	thuong.iMau = a.iMau * b.iTu;
	thuong.rutGon();
	return thuong;
}

bool operator==(PhanSo a, PhanSo b) {
	a.rutGon();
	b.rutGon();
	return (a.iTu == b.iTu) && (a.iMau == b.iMau);
}
bool operator>(PhanSo a, PhanSo b) {
	a.rutGon();
	b.rutGon();
	return (a.iTu * b.iMau) > (a.iMau * b.iTu);
}
bool operator<(PhanSo a, PhanSo b) {
	a.rutGon();
	b.rutGon();
	return (a.iTu * b.iMau) < (a.iMau * b.iTu);
}