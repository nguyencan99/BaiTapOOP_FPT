#pragma once
#include "ThiSinh.h"
class ThiSinhKhoiC :
    public ThiSinh
{
private:
	int n_diemVan;
	int n_diemSu;
	int n_diemDia;
public:
	ThiSinhKhoiC();
	ThiSinhKhoiC(int diemVan, int diemSu, int diemDia);
	ThiSinhKhoiC(ThiSinhKhoiC& tsC);
	~ThiSinhKhoiC();
	void	setDiemVan(int diemVan);
	int		getDiemVan();
	void	setDiemSu(int diemSu);
	int		getDiemSu();
	void	setDiemDia(int diemDia);
	int		getDiemDia();
	int		getType();
	void	nhapThongTinThiSinh();
	void	xuatThongTinThiSinh();
};

