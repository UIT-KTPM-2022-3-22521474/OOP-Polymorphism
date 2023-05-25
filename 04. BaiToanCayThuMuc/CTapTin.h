#pragma once
class CTapTin :public CLuuTru
{
public:
	void Nhap();
	void Xuat();
	int TinhDungLuong();
};
void CTapTin::Nhap()
{
	cout << "Nhap ten tap tin: ";
	cin >> Ten;
	cout << "Nhap ngay: ";
	NgayLap.Nhap();
	cout << "Nhap dung luong tap tin: ";
	cin >> DungLuong;
}
void CTapTin::Xuat()
{
	cout << "\nTen tap tin: " << Ten;
	cout << "\nNgay lap: ";
	NgayLap.Nhap();
	cout << "\nDung luong tap tin: " << DungLuong;
}
int CTapTin::TinhDungLuong()
{
	return DungLuong;
}