#pragma once
#include "CNhanVien.h";

class CQuanLy :public CNhanVien
{
protected:
	int HeSoChucVu;
	int Thuong;
public:
	void Nhap();
	void Xuat();
	void TinhLuong();
	int LayLuong();
	CNhanVien* TimKiem(char*);
};