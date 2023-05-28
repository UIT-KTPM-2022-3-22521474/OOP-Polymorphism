#pragma once
#include"CLuuTru.h"

class CDia
{
protected:
	int n;
	CLuuTru* ds[100];
public:
	void Nhap();
	void Xuat();
	int TinhDungLuong();
	int DemTapTin();
	int DemThuMucCon();
};
void CDia::Nhap()
{
	cout << "\nNhap so luong doi tuong luu tru: ";
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
void CDia::Xuat()
{
	cout << "\nSo luong doi tuong luu tru: " << n << "." << endl;
	for (int i = 0; i < n; i++)
	{
		ds[i]->Xuat();
	}
}
int CDia::TinhDungLuong()
{
	int s = 0;
	for (int i = 0; i < n; i++)
	{
		s += ds[i]->TinhDungLuong();
	}
	return s;
}

int CDia::DemTapTin()
{
	int dem = 0;
	for (int i = 0; i < n; i++)
		dem += ds[i]->DemTapTin();
	return dem;
}

int CDia::DemThuMucCon()
{
	int dem = 0;
	for (int i = 0; i < n; i++)
		dem += ds[i]->DemThuMucCon();
	return dem;
}