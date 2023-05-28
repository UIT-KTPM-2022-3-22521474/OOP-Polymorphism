#include"CMachDien.h"
#include"CDienTro.h"
#include"CSongSong.h"
#include"CNoiTiep.h"

int main()
{
	cout << "Problem 03: Bai toan MachDien - To Vinh Tien - 22521474." << endl;
	CMachDien* a = NULL;
	int type;
	cout << "\nNhap loai (0. Noi tiep, 1. Song song, 2. Dien tro): ";
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
	cout << "\nMach dien la: ";
	a->Xuat();
	cout << endl;
	float r = a->TinhDienTro();
	cout << "Dien tro tuong duong la: " << r << "." << endl;
	return 0;
}