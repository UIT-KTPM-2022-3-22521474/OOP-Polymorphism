#include<iostream>
#include<cstring>
using namespace std;
#include"CCongTy.h"
#include"CNgay.h"
#include"CNhanVien.h"
#include"CQuanLy.h"
#include"CSanXuat.h"
#include"CVanPhong.h"

int main()
{
	CCongTy a;
	a.Nhap();
	a.Xuat();
	int kq = a.TinhTongLuong();
	cout << "Tong luong: " << kq;
	return 0;
}