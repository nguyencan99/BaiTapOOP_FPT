##Bài 1:
Một đơn vị sản xuất gồm có các cán bộ là công nhân, kỹ sư, nhân viên. 
- Mỗi cán bộ cần quản lý các dữ liệu: Họ tên, tuổi, giới tính(name, nữ, khác), địa chỉ.
   + Cấp công nhân sẽ có thêm các thuộc tính riêng: Bậc (1 đến 10).
   + Cấp kỹ sư có thuộc tính riêng: Nghành đào tạo.
   + Các nhân viên có thuộc tính riêng: công việc.
Yêu cầu
- Yêu cầu 1: Xây dựng các lớp CongNhan, KySu, NhanVien kế thừa từ lớp CanBo.
- Yêu cầu 2: Xây dựng lớp QLCB(quản lý cán bộ) cài đặt các phương thức thực hiện các chức năng sau:
   1. Thêm mới cán bộ.
   2. Tìm kiếm theo họ tên.
   3. Hiện thị thông tin về danh sách các cán bộ.
   4. Thoát khỏi chương trình.

##Bài 2:
Một thư viện cần quản lý các tài liệu bao gồm Sách, Tạp chí, Báo.
- Mỗi tài liệu gồm có các thuộc tính sau: Mã tài liệu(Mã tài liệu là duy nhất), Tên nhà xuất bản, số bản phát hành.
  + Các loại sách cần quản lý thêm các thuộc tính: tên tác giả, số trang.
  + Các tạp chí cần quản lý thêm: Số phát hành, tháng phát hành.
  + Các báo cần quản lý thêm: Ngày phát hành.
Yêu cầu
- Yêu cầu 1: Xây dựng các lớp để quản lý tài liệu cho thư viện một cách hiệu quả.
- Yêu cầu 2: Xây dựng lớp QuanLySach có các chức năng sau:
  1. Thêm mới tài liêu: Sách, tạp chí, báo.
  2. Xoá tài liệu theo mã tài liệu.
  3. Hiện thị thông tin về tài liệu.
  4. Tìm kiếm tài liệu theo loại: Sách, tạp chí, báo.
  5. Thoát khỏi chương trình.

##Bài 3
Các thí sinh dự thi đại học bao gồm các thí sinh thi khối A, B, và khối C.
- Các thí sinh cần quản lý các thông tin sau: Số báo danh, họ tên, địa chỉ, mức ưu tiên.
  + Thí sinh thi khối A thi các môn: Toán, Lý, Hoá.
  + Thí sinh thi khối B thi các môn: Toán, Hoá, Sinh.
  + Thí sinh thi khối C thi các môn: Văn, Sử, Địa.
Yêu cầu:
- Yêu cầu 1: Xây dựng các lớp để quản lý các thi sinh dự thi đại học.
- Yêu cầu 2: Xây dựng lớp TuyenSinh có các chức năng:
  1. Thêm mới thí sinh.
  2. Hiện thị thông tin của thí sinh và khối thi của thí sinh.
  3. Tìm kiếm theo số báo danh.
  4. Thoát khỏi chương trình.

##Bài 4
Để quản lý các hộ dân cư trong một khu phố, người ta cần các thông tin sau: Số thành viên trong gia đình, Số nhà, thông tin mỗi cá nhân trong gia đình.
Với mỗi cá nhân, người ta quản lý các thông tin sau: Họ tên, Tuổi, Nghề nghiệp, số chứng minh nhân dân(duy nhất cho mỗi người).
Yêu cầu:
- Yêu cầu 1: Hãy xây dựng lớp Nguoi để quản lý thông tin của mỗi cá nhân.
- Yêu cầu 2: Xây dựng lớp HoGiaDinh để quản lý thông tin của từng hộ gia đình.
- Yêu cầu 2: Xây dựng lớp KhuPho để quản lý các thông tin của từng hộ gia đình.
- Yêu cầu 3: Nhập n hộ dân. (n nhập từ bàn phím), hiển thị thông tin của các hộ trong khu phố.

##Bài 7
Khoa CNTT – DHKHTN cần quản lý việc thanh toán tiền lương cho các cán bộ giá viên trong khoa. Để quản lý được, khoa cần các thông tin sau:
Với mỗi cán bộ giáo viên có các thông tin sau: lương cứng, lương thưởng, tiền phạt, lương thực lĩnh, và các thông tin cá nhân: Họ tên, tuổi, quê quán, mã số giáo viên.
Yêu cầu
- Yêu cầu 1: Xây dựng lớp Nguoi để quản lý các thông tin cá nhân của mỗi giáo viên.
- Yêu cầu 2: Xây dựng lớp CBGV để quản lý các thông tin của các cán bộ giáo viên.
- Yêu cầu 3: Xây dựng các phương thức thêm, xoá các cán bộ giáo viên theo mã số giáo viên.
- Yêu cầu 4: Tính lương thực lĩnh cho giáo viên: Lương thực = Lương cứng + lương thưởng – lương phạt.

##Bài 10
Bài tập tự luyện
Để xử lý văn bản người ta xây dựng lớp VanBan  có thuộc tính riêng là một xâu ký tự.
Yêu cầu:
- Yêu cầu 1: Xây dựng hàm khởi tạo VanBan(), VanBan(String st).
- Yêu cầu 2: Xây dựng phương thức đếm số từ của văn bản.
- Yêu cầu 3: Xây dựng phương thức đếm số lượng ký tự A( không phân biệt hoa thường) của văn bản.
- Yêu cầu 4: Chuẩn hoá văn bản theo tiêu chuẩn sau: Ở đầu và cuối sâu không có ký tự trống, 
             ở giữa sâu không có 2 hoặc nhiều hơn các ký tự khoảng trắng kiền kề nhau.

