#include "CQuanLy.h"

void CQuanLy::Nhap()
{
	cout << "Nhap ho ten nhan vien quan ly: ";
	cin >> HoTen;
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
	cout << "Ho ten nhan vien quan ly: ";
	cout << HoTen << endl;
	cout << "Ngay sinh: ";
	NgaySinh.Xuat();
	cout << endl;
	cout << "Luong co ban: ";
	cout << LuongCoBan;
	cout << "He so chuc vu: ";
	cout << HeSoChucVu << endl;
	cout << "Thuong: ";
	cout << Thuong << endl;
	cout << "Luong: ";
	cout << Luong;
}
void CQuanLy::TinhLuong()
{
	Luong = LuongCoBan * HeSoChucVu + Thuong;
}
int CQuanLy::LayLuong()
{
	return Luong;
}
CNhanVien* CQuanLy::TimKiem(char* ht)
{
	if (strcmp(HoTen, ht) == 0)
		return this;
	return nullptr;
}