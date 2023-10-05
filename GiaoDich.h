#pragma once
#include<iostream>
#include<cassert>
#include <string>
using namespace std;
class GiaoDich {
private:
	long double DonGia;
	long double DienTich;
	string MaGD;
	string NgayGD;

public:
	GiaoDich() {
		MaGD = "";
		NgayGD = "";
		DonGia = 0;
		DienTich = 0;
	}

	GiaoDich(GiaoDich& a) {
		MaGD = a.MaGD;
		NgayGD = a.NgayGD;
		DonGia = a.DonGia;
		DienTich = a.DienTich;
	}

	~GiaoDich(){}

	void nhap() {
		cin.ignore();
		cout << "Nhap ma giao dich: ";
		getline(cin, MaGD);
		
		cout << "Nhap ngay giao dich: ";
		getline(cin, NgayGD);
		cout << "Nhap don gia: ";
		cin >> DonGia;
		cout << "Nhap dien tich: ";
		cin >> DienTich;
	}

	void xuat()
	{
		cout << "Ma giao dich: " << MaGD << endl;
		cout << "Ngay giao dich: " << NgayGD << endl;
		cout << "Don gia: " << DonGia << endl ;
		cout << "Dien tich: " << DienTich << endl;


	}
	long double DT() {
		return DienTich;
	}
	long double DG() {
		return DonGia;
	}
};