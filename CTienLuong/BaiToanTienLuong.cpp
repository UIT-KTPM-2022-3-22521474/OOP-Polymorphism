#include<iostream>
#include<string>
using namespace std;
#include"CCongTy.h"
#include"CNgay.h"
#include"CNhanVien.h"
#include"CQuanLy.h"
#include"CSanXuat.h"
#include"CVanPhong.h"

int main()
{
	cout << "Problem 02: Bai toan TienLuong - To Vinh Tien - 22521474." << endl;
	CCongTy a;
	a.Nhap();
	a.Xuat();
	int ss = a.TinhTongLuong();
	cout << "\nTong luong cua cong ty la:	" << ss << ".";
	char HoTen[30];
	cout << "\nNhap ho ten cua nhan vien can tim kiem:	";
	cin.ignore();
	cin.getline(HoTen, 30);
	CNhanVien* kq = a.TimKiem(HoTen);
	if (kq != NULL)
	{
		cout << "\nDa tim thay nhan vien co ho ten:	" << HoTen << "." << endl;
		kq->Xuat();
	}
	else
	{
		cout << "\nKhong tim thay nhan vien co ho ten:	" << HoTen << ".";
	}
	return 0;
}