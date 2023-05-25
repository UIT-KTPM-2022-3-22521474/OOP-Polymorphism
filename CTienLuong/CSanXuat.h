#pragma once
#include "CNhanVien.h"
#include <string>

class CSanXuat : public CNhanVien
{
protected:
	int SoSanPham;
public:
	void Nhap();
	void Xuat();
	void TinhLuong();
	int LayLuong();
	CNhanVien* TimKiem(char);
};