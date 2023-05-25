#pragma once
#include <iostream>
#include "CNhanVien.h"
#include "CSanXuat.h"
#include "CVanPhong.h"
#include "CQuanLy.h"

class CCongTy
{
protected:
	int n;
	CNhanVien* ds[100];
public:
	void Nhap();
	void Xuat();
	void TinhLuong();
	int TinhTongLuong();
	CNhanVien* TimKiem(char*);
};