#include "CQuanLy.h"

void CQuanLy::Nhap()
{
	cout << "\nNhap ho ten nhan vien quan ly: ";
	cin.ignore();
	cin.getline(HoTen, 30);
	cout << "Nhap ngay sinh: ";
	NgaySinh.Nhap();
	cout << "Nhap luong co ban: ";
	cin >> LuongCoBan;
	cout << "Nhap he so chuc vu: ";
	cin >> HeSoChucVu;
	cout << "Nhap thuong: ";
	cin >> Thuong;
}
void CQuanLy::Xuat()
{
	cout << "\nHo ten nhan vien quan ly: ";
	cout << HoTen << endl;
	cout << "Ngay sinh: ";
	NgaySinh.Xuat();
	cout << endl;
	cout << "Luong co ban: ";
	cout << LuongCoBan << endl;
	cout << "He so chuc vu: ";
	cout << HeSoChucVu << endl;
	cout << "Thuong: ";
	cout << Thuong << endl;
	cout << "Luong: ";
	TinhLuong();
	cout << Luong;
	cout << endl;
}
void CQuanLy::TinhLuong()
{
	Luong = LuongCoBan * HeSoChucVu + Thuong;
}
int CQuanLy::LayLuong()
{
	TinhLuong();
	return Luong;
}
CNhanVien* CQuanLy::TimKiem(char* ht)
{
	if (strcmp(HoTen, ht) == 0)
		return this;
	return nullptr;
}