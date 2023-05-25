#pragma once
class CThuMuc:public CLuuTru
{
protected:
	int n;
	CLuuTru* ds[100];
public:
	void Nhap();
	void Xuat();
	int TinhDungLuong();
};
void CThuMuc::Nhap()
{
	cout << "Nhap ten thu muc: ";
	cin >> Ten;
	cout << "Nhap ngay lap: ";
	NgayLap.Nhap();
	cout << "Nhap dung luong: ";
	cin >> DungLuong;
	cout << "Nhap so luong thanh phan: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		int type;
		cout << "Nhap loai thanh phan (0. Tap tin, 1. Thu muc): ";
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