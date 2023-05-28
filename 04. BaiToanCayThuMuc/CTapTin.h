#pragma once
#include "CLuuTru.h"

class CTapTin :public CLuuTru
{
public:
	void Nhap();
	void Xuat();
	int TinhDungLuong();
	int DemTapTin();
	int DemThuMucCon();
};
void CTapTin::Nhap()
{
	cout << "\nNhap ten tap tin: ";
	cin >> Ten;
	cout << "Nhap ngay lap: ";
	NgayLap.Nhap();
	cout << "Nhap dung luong tap tin: ";
	cin >> DungLuong;
}
void CTapTin::Xuat()
{
	cout << "\nTen tap tin: " << Ten << ".";
	cout << "\nNgay lap: ";
	NgayLap.Xuat();
	cout << ".\nDung luong tap tin: " << DungLuong << ".";
	cout << endl;
}

int CTapTin::TinhDungLuong()
{
	return DungLuong;
}

int CTapTin::DemTapTin()
{
	return 1;
}

int CTapTin::DemThuMucCon()
{
	return 0;
}