#pragma once
class CCongTy
{
protected:
	int n;
	CNhanVien* ds[100];
public:
	void Nhap();
	void Xuat();
	void TinhLuong();
	int TinhTongLuong();
	CNhanVien* TimKiem(char);
};
void CCongTy::Nhap()
{
	cout << "Nhap so luong nhan vien: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		int type;
		cout << "Nhap loai nhan vien (0. San Xuat 1. Van Phong 2. Quan Ly): ";
		cin >> type;
		switch (type)
		{
		case 0: ds[i] = new CSanXuat;
			break;
		case 1: ds[i] = new CVanPhong;
			break;
		case 2: ds[i] = new CQuanLy;
			break;
		}
		ds[i]->Nhap();
	}
}
void CCongTy::Xuat()
{
	cout << "So luong nhan vien: ";
	for (int i = 0; i < n; i++)
		ds[i]->Xuat();
}
void CCongTy::TinhLuong()
{
	for (int i = 0; i < n; i++)
	{
		ds[i]->TinhLuong;
	}
}
int CCongTy::TinhTongLuong()
{
	int s = 0;
	for (int i = 0; i < n; i++)
		s += ds[i]->LayLuong;
}
CNhanVien* CCongTy::TimKiem(char ht)
{
	for (int i = 0; i < n; i++)
	{
		CNhanVien* kq = ds[i]->TimKiem(ht);
		if (kq != NULL)
			return kq;
	}
	return NULL;
}