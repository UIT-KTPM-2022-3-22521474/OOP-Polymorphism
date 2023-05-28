#pragma once
class CLuuTru
{
protected:
	string Ten;
	CNgay NgayLap;
	int DungLuong;
public:
	virtual void Nhap();
	virtual void Xuat();
	virtual int TinhDungLuong();
	virtual int DemTapTin();
	virtual int DemThuMucCon();
};
void CLuuTru::Nhap()
{
	return;
}

void CLuuTru::Xuat()
{
	return;
}

int CLuuTru::TinhDungLuong()
{
	return DungLuong;
}

int CLuuTru::DemTapTin()
{
	return 0;
}

int CLuuTru::DemThuMucCon()
{
	return 0;
}