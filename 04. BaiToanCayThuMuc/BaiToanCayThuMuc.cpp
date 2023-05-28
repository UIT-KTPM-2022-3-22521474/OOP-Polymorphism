#include<iostream>
#include<string>
using namespace std;
#include"CNgay.h"
#include"CLuuTru.h"
#include"CTapTin.h"
#include"CThuMuc.h"
#include"CODia.h"

int main()
{
	CDia dia;
	dia.Nhap();
	dia.Xuat();
	int mem = dia.TinhDungLuong();
	cout << "\nDung luong cua o dia la: " << mem << "." << endl;
	int demtt = dia.DemTapTin();
	cout << "\nSo luong tap tin trong o dia la:	" << demtt << ".";
	int demtmc = dia.DemThuMucCon();
	cout << "\nSo luong thu muc con trong o dia la:	" << demtmc << "." << endl;
	return 0;
}