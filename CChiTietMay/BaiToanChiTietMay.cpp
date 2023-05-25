#include<iostream>
using namespace std;
#include"CChiTiet.h"
#include"CChiTietDon.h"
#include"CChiTietPhuc.h"
#include"CMay.h"

int main()
{
	CMay may;
	may.Nhap();
	int s = may.TinhTien();
	cout << "\nTong chi phi: " << s;
	return 0;
}