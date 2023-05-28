#include "CCongTy.h"

void CCongTy::Nhap()
{
	cout << "\nNhap so luong nhan vien: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		int type;
		cout << "\nNhap loai nhan vien (0. San xuat, 1. Van phong, 2. Quan ly): ";
		cin >> type;
		switch (type)
		{
		case 0:
			ds[i] = new CSanXuat;
			break;
		case 1:
			ds[i] = new CVanPhong;
			break;
		case 2:
			ds[i] = new CQuanLy;
			break;
		}
		ds[i]->Nhap();
	}
}

void CCongTy::Xuat()
{
	cout << "\nSo luong nhan vien: " << n << endl;
	for (int i = 0; i < n; i++)
		ds[i]->Xuat();
}

void CCongTy::TinhLuong()
{
	for (int i = 0; i < n; i++)
		ds[i]->TinhLuong();
}

int CCongTy::TinhTongLuong()
{
	int s = 0;
	for (int i = 0; i < n; i++)
		s = s + ds[i]->LayLuong();
	return s;
}

CNhanVien* CCongTy::TimKiem(char* ht)
{
	for (int i = 0; i < n; i++)
	{
		CNhanVien* kq = ds[i]->TimKiem(ht);
		if (kq != nullptr)
			return kq;
	}
	return nullptr;
}