#pragma once
#include "CLuuTru.h"

class CThuMuc:public CLuuTru
{
protected:
	int n;
	CLuuTru* ds[100];
public:
	void Nhap();
	void Xuat();
	int TinhDungLuong();
	int DemThuMucCon();
	int DemTapTin();
};
void CThuMuc::Nhap()
{
	cout << "\nNhap ten thu muc: ";
	cin >> Ten;
	cout << "Nhap ngay lap: ";
	NgayLap.Nhap();
	cout << "Nhap dung luong thu muc: ";
	cin >> DungLuong;
	cout << "Nhap so luong thanh phan: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		int type;
		cout << "\nNhap loai thanh phan (0. Tap tin, 1. Thu muc): ";
		cin >> type;
		switch (type)
		{
		case 0: ds[i] = new CTapTin;
			break;
		case 1: ds[i] = new CThuMuc;
			break;
		}
		ds[i]->Nhap();
	}
}
void CThuMuc::Xuat()
{
	cout << "\nTen thu muc: " << Ten;
	cout << "\nNgay lap: ";
	NgayLap.Xuat();
	cout << "\nDung luong: " << DungLuong;
	cout << "\nSo luong thanh phan: " << n;
	cout << endl;
	for (int i = 0; i < n; i++)
	{
		ds[i]->Xuat();
	}
}
int CThuMuc::TinhDungLuong()
{
	int s = 0;
	for (int i = 0; i < n; i++)
	{
		s += ds[i]->TinhDungLuong();
	}
	return s;
}

int CThuMuc::DemTapTin()
{
	int dem = 0;
	for (int i = 0; i < n; i++)
		dem += ds[i]->DemTapTin();
	return dem;
}

int CThuMuc::DemThuMucCon()
{
	int dem = 1;
	for (int i = 0; i < n; i++)
		dem += ds[i]->DemThuMucCon();
	return dem++;
}