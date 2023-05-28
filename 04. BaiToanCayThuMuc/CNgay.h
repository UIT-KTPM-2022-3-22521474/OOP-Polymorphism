#pragma once
#include <iostream>
#include <string>
using namespace std;

class CNgay
{
private:
	int Ngay;
	int Thang;
	int Nam;
public:
	void Nhap();
	void Xuat();
};

void CNgay::Nhap()
{
	cout << "\nNhap ngay: ";
	cin >> Ngay;
	cout << "Nhap thang: ";
	cin >> Thang;
	cout << "Nhap nam: ";
	cin >> Nam;
}
void CNgay::Xuat()
{
	string date, month, year;
	if (Ngay < 10)
		date = "0" + to_string(Ngay);
	else
		date = to_string(Ngay);
	if (Thang < 10)
		month = "0" + to_string(Thang);
	else
		month = to_string(Thang);
	year = to_string(Nam);
	cout << date << "/" << month << "/" << year;
}