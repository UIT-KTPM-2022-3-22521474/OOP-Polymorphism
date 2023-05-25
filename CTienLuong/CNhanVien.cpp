#include "CNhanVien.h"

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
CNhanVien* CNhanVien::TimKiem(char* ht)
{
	if (strcmp(HoTen, ht) == 0)
		return this;
	return NULL;
}