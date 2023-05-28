#pragma once
#include"CChiTiet.h"

class CChiTietDon :public CChiTiet
{
protected:
	float GiaTien;
public:
	void Nhap();
	void Xuat();
	float TinhTien();
	CChiTiet* TimKiem(long);
	int DemSoLuong();
};

void CChiTietDon::Nhap()
{
	cout << "Nhap ma so: ";
	cin >> MaSo;
	cout << "Nhap gia: ";
	cin >> GiaTien;
}

void CChiTietDon::Xuat()
{
	cout << "\nMa so: " << MaSo;
	cout << "\nGia: " << GiaTien;
}

float CChiTietDon::TinhTien()
{
	return GiaTien;
}

CChiTiet* CChiTietDon::TimKiem(long ms)
{
	if (MaSo == ms)
		return this;
	return NULL;
}

int CChiTietDon::DemSoLuong()
{
	return 1;
}