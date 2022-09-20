#pragma once
#include "ThiSinh.h"
class ThiSinhKhoiB :
    public ThiSinh
{
private:
	int n_diemToan;
	int n_diemSinh;
	int n_diemHoa;
public:
	ThiSinhKhoiB();
	ThiSinhKhoiB(int diemToan, int diemSinh, int diemHoa);
	ThiSinhKhoiB(ThiSinhKhoiB& tsB);
	~ThiSinhKhoiB();
	void	setDiemToan(int diemToan);
	int		getDiemToan();
	void	setDiemSinh(int diemSinh);
	int		getDiemSinh();
	void	setDiemHoa(int diemHoa);
	int		getDiemHoa();
	int		getType();
	void	nhapThongTinThiSinh();
	void	xuatThongTinThiSinh();
};

