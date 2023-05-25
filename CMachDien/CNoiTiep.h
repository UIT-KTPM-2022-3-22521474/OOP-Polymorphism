#pragma once
#include "CMachDien.h"
#include "CSongSong.h"
#include "CDienTro.h"
class CNoiTiep:public CMachDien
{
protected:
	int n;
	CMachDien* ds[100];
public:
	void Nhap();
	void Xuat();
	float TinhDienTro();
};