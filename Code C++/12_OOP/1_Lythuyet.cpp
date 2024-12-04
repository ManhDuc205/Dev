1. Encapsulation
Encapsulation (đóng gói) là kỹ thuật gom chung thuộc tính (dữ liệu) và hành vi liên quan (phương thức tác động trên dữ liệu đó)
của một nhóm đối tượng vào thành lớp. Để truy xuất thuộc tính và hành vi của lớp phải tạo ra một thể hiện của lớp đó.
Chúng ta trừu tượng hóa đối tượng bằng cách định nghĩa một lớp. Định nghĩa của lớp đã đóng gói thuộc tính và hành vi của các
đối tượng thuộc lớp đó.
4. Tính trừu tượng: được thể hiện qua interface, interface thì không phải là lớp, nó không có thuộc tính và phương thức chỉ có 
tên chứ không có thân, bình thường tính kế thừa là lớp con kế thừa các đặc tính và phương thức của lớp cha, nhưng tính trừu tượng
là khi mà các đối tượng của lớp có thể thực hiện được các phương thức của một interface nào đó mà không cần kế thừa 
thuộc tính, nhưng interface sẽ chỉ định nghĩa phương thức qua tên, còn đối tượng nào muốn thực hiện phương thức của interface đó 
thì phải “xin phép” interface đó và viết lại chính hàm đó theo cách riêng biệt...