#include "CSanXuat.h"

void CSanXuat::Nhap()
{
	cout << "\nNhap ho ten nhan vien san xuat: ";
	cin.ignore();
	cin.getline(HoTen, 30);
	cout << "Nhap ngay sinh: ";
	NgaySinh.Nhap();
	cout << "Nhap luong co ban: ";
	cin >> LuongCoBan;
	cout << "Nhap so san pham: ";
	cin >> SoSanPham;
}

void CSanXuat::Xuat()
{
	cout << "\nHo ten nhan vien san xuat: " << HoTen << endl;
	cout << "Ngay sinh: ";
	NgaySinh.Xuat();
	cout << endl;
	cout << "Luong co ban: " << LuongCoBan << endl;
	cout << "So san pham: " << SoSanPham << endl;
	TinhLuong();
	cout << "Luong: " << Luong << endl << endl;
}

void CSanXuat::TinhLuong()
{
	Luong = LuongCoBan + SoSanPham * 2000;
}

int CSanXuat::LayLuong()
{
	TinhLuong();
	return Luong;
}

CNhanVien* CSanXuat::TimKiem(char ht)
{
	if (strcmp(HoTen, &ht) == 0)
		return this;
	return nullptr;
}