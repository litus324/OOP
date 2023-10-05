#pragma once
#include"GiaoDich.h"
#include"GDDat.h"
#include"GDNha.h"

class QLGiaoDich :GiaoDich, GDDat, GDNha {
private:
	int n;
	GiaoDich* list;
public:
	void nhap() {
		cout << "Nhap vao so luong giao dich: ";
		cin >> n;
		list = new GiaoDich [n];
		int type;
		for (int i = 0; i < n; i++) {
			cout << "1. Giao dich dat.\n";
			cout << "2. Giao dich nha.\n";
			cout << "Nhap lua chon: ";
			cin >> type;
			if (type == 1) {
				GDDat::nhap();
			}
			else {
				GDNha::nhap();
			}
		}
	}
	void xuat() {
		for (int i = 0; i < n; i++) {
			list[i].xuat();
		}
	}
};