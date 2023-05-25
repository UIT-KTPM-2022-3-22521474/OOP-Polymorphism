#include "CDienTro.h"

void CDienTro::Nhap()
{
	cout << "Nhap ma so: ";
	cin >> MaSo;
	cout << "Nhap gia tri cua dien tro: ";
	cin >> r;
}
void CDienTro::Xuat()
{
	cout << "Ma so: " << MaSo << endl;
	cout << "R = " << r;
}
float CDienTro::TinhDienTro()
{
	return r;
}