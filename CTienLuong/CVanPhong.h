#pragma once
class CVanPhong :public CNhanVien
{
protected:
	int SoNgayLamViec;
	int TroCap;
public:
	void Nhap();
	void Xuat();
	void TinhLuong();
	int LayLuong();
	CNhanVien* TimKiem(char);
};
void CVanPhong::Nhap()
{
	cout << "Nhap ho ten nhan vien quan ly: ";
	cin >> HoTen;
	cout << "Nhap ngay sinh: ";
	NgaySinh.Nhap();
	cout << "Nhap luong co ban: ";
	cin >> LuongCoBan;
	cout << "So ngay lam viec: ";
	cin >> SoNgayLamViec;
	cout << "Nhap tro cap: ";
	cin >> TroCap;
}
void CVanPhong::Xuat()
{
	cout << "Ho ten nhan vien quan ly: ";
	cout << HoTen << endl;
	cout << "Ngay sinh: ";
	NgaySinh.Xuat();
	cout << endl;
	cout << "Luong co ban: ";
	cout << LuongCoBan << endl;
	cout << "So ngay lam viec: ";
	cout << SoNgayLamViec << endl;
	cout << "Tro cap: ";
	cout << TroCap << endl;
	cout << "Luong: ";
	cout << Luong;
}
void CVanPhong::TinhLuong()
{
	Luong = LuongCoBan * SoNgayLamViec*100000 + TroCap;
}
int CVanPhong::LayLuong()
{
	return Luong;
}
CNhanVien* CVanPhong::TimKiem(char ht)
{
	if (strcmp(HoTen, &ht) == 0)
		return this;
	return NULL;
}