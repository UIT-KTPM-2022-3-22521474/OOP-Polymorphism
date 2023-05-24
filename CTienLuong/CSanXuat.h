#pragma once
class CSanXuat :public CNhanVien
{
protected:
	int SoSanPham;
public:
	void Nhap();
	void Xuat();
	void TinhLuong();
	int LayLuong();
	CNhanVien* TimKiem(char);
};
void CSanXuat::Nhap()
{
	cout << "Nhap ho ten nhan vien quan ly: ";
	cin >> HoTen;
	cout << "Nhap ngay sinh: ";
	NgaySinh.Nhap();
	cout << "Nhap luong co ban: ";
	cin >> LuongCoBan;
	cout << "Nhap so san pham: ";
	cin >> SoSanPham;
}
void CSanXuat::Xuat()
{
	cout << "Ho ten nhan vien quan ly: ";
	cout << HoTen << endl;
	cout << "Ngay sinh: ";
	NgaySinh.Xuat();
	cout << endl;
	cout << "Luong co ban: ";
	cout << LuongCoBan << endl;
	cout << "So san pham: ";
	cout << SoSanPham << endl;
	cout << "Luong: ";
	cout << Luong;
}
void CSanXuat::TinhLuong()
{
	Luong = LuongCoBan * SoSanPham + 2000;
}
int CSanXuat::LayLuong()
{
	return Luong;
}
CNhanVien* CSanXuat::TimKiem(char ht)
{
	if (strcmp(HoTen, &ht) == 0)
		return this;
	return NULL;
}