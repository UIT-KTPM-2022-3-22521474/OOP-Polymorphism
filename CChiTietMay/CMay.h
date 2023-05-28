#pragma once
#include"CChiTiet.h"

class CMay
{
protected:
	int n;
	CChiTiet* ds[100];
public:
	void Nhap();
	void Xuat();
	float TinhTien();
	CChiTiet* TimKiem(long);
	int DemChiTietDon();
};

void CMay::Nhap()
{
	cout << "\nNhap so luong chi tiet cua may: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		int type;
		cout << "\nNhap loai (0. Don, 1. Phuc): ";
		cin >> type;
		switch (type)
		{
		case 0: ds[i] = new CChiTietDon;
			break;
		case 1: ds[i] = new CChiTietPhuc;
		}
		ds[i]->Nhap();
	}
}
void CMay::Xuat()
{
	cout << "\nSo luong chi tiet cua may: " << n;
	for (int i = 0; i < n; i++)
	{
		ds[i]->Xuat();
		cout << endl;
	}
}
CChiTiet* CMay::TimKiem(long ms)
{
	for (int i = 0; i < n; i++)
	{
		CChiTiet* kq = ds[i]->TimKiem(ms);
		if (kq != NULL)
			return kq;
	}
	return NULL;
}

float CMay::TinhTien()
{
	float s = 0;
	for (int i = 0; i < n; i++)
	{
		s = s + ds[i]->TinhTien();
	}
	return s;
}

int CMay::DemChiTietDon()
{
	int dem = 0;
	for (int i = 0; i < n; i++)
		dem = dem + ds[i]->DemSoLuong();
	return dem;
}