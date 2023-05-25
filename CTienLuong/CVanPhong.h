#pragma once
#include "CNhanVien.h"
class CVanPhong :public CNhanVien
{
protected:
	int SoNgayLamViec;
	int TroCap;
public:
	void Nhap();
	void Xuat();
	void TinhLuong();
	int LayLuong();
	CNhanVien* TimKiem(char*);
};