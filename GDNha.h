#pragma once
#include"GiaoDich.h"

class GDNha : GiaoDich {
private:
	int loaiNha;
	string DiaChi;
public:
	GDNha()
		:GiaoDich(), loaiNha(0), DiaChi("") {}

	GDNha(GDNha& a)
		:GiaoDich(a), loaiNha(a.loaiNha), DiaChi(a.DiaChi) {}

	~GDNha() {}

	void nhap() {
		GiaoDich::nhap();
		cout << "1. Nha cao cap\n";
		cout << "1. Nha thuong\n";
		cout << "Moi chon loai nha:\n";
		cin>>loaiNha;
		cout << "Moi nhap vao dia chi nha: ";
		getline(cin, DiaChi);
		cin.ignore();
		cout << endl;
	}

	void xuat() {
		GiaoDich::xuat();
		cout << "Loai nha: " << loaiNha << endl;
		cout << "Dia chi nha: " << DiaChi << endl;
	}

	long double Tien() {
		if (loaiNha == 1)
			return GiaoDich::DT()* GiaoDich::DG();
		else
			return GiaoDich::DT()* GiaoDich::DG()  * 90 / 100;
	}
};