#pragma once
#include "ThiSinh.h"
class ThiSinhKhoiA :
    public ThiSinh
{
private:
    int n_diemToan;
    int n_diemLy;
    int n_diemHoa;
public:
	ThiSinhKhoiA();
	ThiSinhKhoiA(int diemToan, int diemLy, int diemHoa);
	ThiSinhKhoiA(ThiSinhKhoiA& tsA);
	~ThiSinhKhoiA();
	void	setDiemToan(int diemToan);
	int		getDiemToan();
	void	setDiemLy(int diemLy);
	int		getDiemLy();
	void	setDiemHoa(int diemHoa);
	int		getDiemHoa();
	int		getType();
	void	nhapThongTinThiSinh();
	void	xuatThongTinThiSinh();
};

