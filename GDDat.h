#pragma once
#include"GiaoDich.h"

class GDDat : GiaoDich {
private:
	char Loai;
public:
	GDDat()
	:GiaoDich(), Loai(' '){}

	GDDat(GDDat& a)
	:GiaoDich(a), Loai(a.Loai){}

	~GDDat(){}
	
	void nhap() {
		GiaoDich::nhap();
		cout << "Moi nhap vao loai dat(A, B, C): ";
		cin >> Loai;
		cin.ignore();
		cout << endl;
	}

	void xuat(){
		GiaoDich::xuat();
		cout << "Loai dat: " << Loai << endl;
	}

	long double Tien() {
		if (Loai == 'A')
			return GiaoDich::DT() * GiaoDich::DG() * 1.5;
		else
			return GiaoDich::DT()* GiaoDich::DG();
	}
};