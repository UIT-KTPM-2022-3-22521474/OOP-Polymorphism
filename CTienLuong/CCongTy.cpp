#include "CCongTy.h"

void CCongTy::Nhap()
{
	std::cout << "Nhap so luong nhan vien: ";
	std::cin >> n;
	for (int i = 0; i < n; i++)
	{
		int type;
		std::cout << "Nhap loai nhan vien (0. San Xuat 1. Van Phong 2. Quan Ly): ";
		std::cin >> type;
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
	std::cout << "So luong nhan vien: " << n << std::endl;
	for (int i = 0; i < n; i++)
		ds[i]->Xuat();
}

void CCongTy::TinhLuong()
{
	for (int i = 0; i < n; i++)
	{
		ds[i]->TinhLuong();
	}
}

int CCongTy::TinhTongLuong()
{
	int s = 0;
	for (int i = 0; i < n; i++)
		s += ds[i]->LayLuong();
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
