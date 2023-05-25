#include"CMachDien.h"
#include"CDienTro.h"
#include"CSongSong.h"
#include"CNoiTiep.h"

int main()
{
	CMachDien* a = NULL;
	int type;
	cout << "Nhap loai (0. Noi tiep, 1. Song song, 2. Dien tro): ";
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
	cout << endl;
	float r = a->TinhDienTro();
	cout << "\nDien tro tuong duong la: ";
	cout << r;
	return 0;
}