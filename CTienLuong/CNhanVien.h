#pragma once
class CNhanVien
{
protected:
	int Luong;
	int LuongCoBan;
	CNgay NgaySinh;
	char HoTen[30];
public:
	virtual void Nhap();
	virtual void Xuat();
	virtual void TinhLuong();
	virtual int LayLuong();
	virtual CNhanVien* TimKiem(char);
};
void CNhanVien::Nhap()
{
	return;
}
void CNhanVien::Xuat()
{
	return;
}
void CNhanVien::TinhLuong()
{
	return;
}
int CNhanVien::LayLuong()
{
	return Luong;
}
CNhanVien* CNhanVien::TimKiem(char ht)
{
	if (strcmp(HoTen, &ht) == 0)
		return this;
	return NULL;
}