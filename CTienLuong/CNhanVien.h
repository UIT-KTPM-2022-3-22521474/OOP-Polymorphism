#pragma once
#include "CNgay.h"

class CNhanVien
{
protected:
	float Luong;
	int LuongCoBan;
	CNgay NgaySinh;
	char HoTen[30];
public:
	virtual void Nhap();
	virtual void Xuat();
	virtual void TinhLuong();
	virtual int LayLuong();
	virtual CNhanVien* TimKiem(char*);
};