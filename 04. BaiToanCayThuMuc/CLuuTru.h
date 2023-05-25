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