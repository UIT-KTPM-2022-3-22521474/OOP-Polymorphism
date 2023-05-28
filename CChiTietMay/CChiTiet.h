#pragma once
class CChiTiet
{
protected:
	long MaSo;
public:
	virtual void Nhap();
	virtual void Xuat();
	virtual float TinhTien();
	virtual CChiTiet* TimKiem(long);
	virtual int DemSoLuong();
};

void CChiTiet::Nhap()
{
	return;
}

void CChiTiet::Xuat()
{
	return;
}

float CChiTiet::TinhTien()
{
	return 0;
}

CChiTiet* CChiTiet::TimKiem(long ms)
{
	if (MaSo == ms)
		return this;
	return NULL;
}

int CChiTiet::DemSoLuong()
{
	return 0;
}