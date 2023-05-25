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

	int res = dia.TinhDungLuong();
	cout << "\nDung luong cua o dia la: " << res;

	dia.Xuat();

	return 0;
}