#pragma once
#include <iostream>

using namespace std;

class PhanSo
{
private:
	int iTu;
	int iMau;
public:
	PhanSo(int iTu=0, int iMau=1);
	friend istream& operator>>(istream& is, PhanSo& a);
	friend ostream& operator<<(ostream& os, PhanSo a);

	int UCLN(int a, int b);
	void rutGon();

	friend PhanSo operator+(PhanSo a,PhanSo b);
	friend PhanSo operator-(PhanSo a,PhanSo);
	friend PhanSo operator*(PhanSo a, PhanSo b);
	friend PhanSo operator/(PhanSo a, PhanSo b);
	 
	friend bool operator==(PhanSo a,PhanSo b);
	friend bool operator>(PhanSo a,PhanSo b);
	friend bool operator<(PhanSo a,PhanSo b);
};

