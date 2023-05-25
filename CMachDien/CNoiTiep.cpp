#include "CNoiTiep.h"

void CNoiTiep::Nhap()
{
	cout << "Nhap so dien tro cua mach: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		int type;
		cout << "Nhap loai (0. Noi tiep, 1. Song song, 2. R): ";
		cin >> type;
		switch (type)
		{
		case 0: ds[i] = new CNoiTiep;
			break;
		case 1: ds[i] = new CSongSong;
			break;
		case 2: ds[i] = new CDienTro;
			break;
		}
		ds[i]->Nhap();
	}
}
void CNoiTiep::Xuat()
{
	cout << "So luong mach dien thanh phan: " << n << endl;
	for (int i = 0; i < n; i++)
	{
		ds[i]->Xuat();
	}
}
float CNoiTiep::TinhDienTro()
{
	float s = 0;
	for (int i = 0; i < n; i++)
	{
		s += ds[i]->TinhDienTro();
	}
	return s;
}