#pragma once
#include"CChiTiet.h"

class CChiTietPhuc :public CChiTiet
{
protected:
	int n;
	CChiTiet* ds[100];
public:
	void Nhap();
	void Xuat();
	float TinhTien();
	CChiTiet* TimKiem(long);
	int DemSoLuong();
};

void CChiTietPhuc::Nhap()
{
	cout << "Nhap ma so: ";
	cin >> MaSo;
	cout << "Nhap so luong chi tiet thanh phan: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		int type;
		cout << "Nhap loai (0. Don, 1. Phuc): ";
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

void CChiTietPhuc::Xuat()
{
	cout << "\nMa so: " << MaSo << "." << endl;
	cout << "So luong chi tiet thanh phan: " << n << ".";
	for (int i = 0; i < n; i++)
	{
		ds[i]->Xuat();
	}		
}

float CChiTietPhuc::TinhTien()
{
	float s = 0;
	for (int i = 0; i < n; i++)
		s = s + ds[i]->TinhTien();
	return s;
}

CChiTiet* CChiTietPhuc::TimKiem(long ms)
{
	if (MaSo == ms)
		return this;
	for (int i = 0; i < n; i++)
	{
		CChiTiet* kq = ds[i]->TimKiem(ms);
		if (kq != NULL)
			return kq;
	}
	return NULL;
}

int CChiTietPhuc::DemSoLuong()
{
	int dem = 0;
	for (int i = 0; i < n; i++)
		dem = dem + ds[i]->DemSoLuong();
	return dem;
}