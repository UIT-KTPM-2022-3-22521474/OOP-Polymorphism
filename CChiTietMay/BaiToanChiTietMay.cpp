#include<iostream>
using namespace std;
#include"CChiTiet.h"
#include"CChiTietDon.h"
#include"CChiTietPhuc.h"
#include"CMay.h"

int main()
{
	cout << "Problem 01: Bai toan Chi tiet may - To Vinh Tien - 22521474." << endl;
	CMay may{};
	may.Nhap();
	may.Xuat();
	float s = may.TinhTien();
	cout << "\nTong chi phi: " << s << "." << endl;
	long fms = 0;
	cout << "\nNhap ma so cua chi tiet may can tim kiem:	";
	cin >> fms;
	CChiTiet* kq = may.TimKiem(fms);
	if (kq != NULL)
	{
		cout << "\nDa tim thay chi tiet co ma so " << fms << ".";
		kq->Xuat();
	}
	else
	{
		cout << "\nKhong tim thay chi tiet co ma so" << fms << ".";
	}		
	int dem = may.DemChiTietDon();
	cout << "\n\nSo luong chi tiet don trong may la:	" << dem << "." << endl;
	return 0;
}