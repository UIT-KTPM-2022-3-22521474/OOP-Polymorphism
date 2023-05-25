#include "CVanPhong.h"

void CVanPhong::Nhap()
{
	cout << "\nNhap ho ten nhan vien van phong: ";
	cin.ignore();
	cin.getline(HoTen, 30);
	cout << "Nhap ngay sinh: ";
	NgaySinh.Nhap();
	cout << "Nhap luong co ban: ";
	cin >> LuongCoBan;
	cout << "So ngay lam viec: ";
	cin >> SoNgayLamViec;
	cout << "Nhap tro cap: ";
	cin >> TroCap;
}
void CVanPhong::Xuat()
{
	cout << "\nHo ten nhan vien van phong: ";
	cout << HoTen << endl;
	cout << "Ngay sinh: ";
	NgaySinh.Xuat();
	cout << endl;
	cout << "Luong co ban: ";
	cout << LuongCoBan << endl;
	cout << "So ngay lam viec: ";
	cout << SoNgayLamViec << endl;
	cout << "Tro cap: ";
	cout << TroCap << endl;
	cout << "Luong: ";
	TinhLuong();
	cout << Luong;
	cout << endl;
}
void CVanPhong::TinhLuong()
{
	Luong = LuongCoBan * SoNgayLamViec * 100000 + TroCap;
}
int CVanPhong::LayLuong()
{
	TinhLuong();
	return Luong;
}
CNhanVien* CVanPhong::TimKiem(char* ht)
{
	if (strcmp(HoTen, ht) == 0)
		return this;
	return NULL;
}