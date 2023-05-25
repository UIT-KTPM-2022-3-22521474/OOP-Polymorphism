#include"CMachDien.h"
#include"CDienTro.h"
#include"CSongSong.h"
#include"CNoiTiep.h"
#include "BaiToanMachDien.h"

int main()
{
	CMachDien* a = NULL;
	int type;
	cout << "Nhap loai (0. NT, 1. SS, 2. R): ";
	cin >> type;
	switch (type)
	{
	case 0: a = new CNoiTiep;
		break;
	case 1: a = new CSongSong;
		break;
	case 2: a = new CDienTro;
		break;
	}
	a->Nhap();
	cout << "Mach dien la: ";
	a->Xuat();
	float r = a->TinhDienTro();
	cout << "Dien tro la: ";
	cout << r;
	return 0;
}