#pragma once
#include "CMachDien.h"

class CDienTro :public CMachDien
{
protected:
	string MaSo;
	float r;
public:
	void Nhap();
	void Xuat();
	float TinhDienTro();
};