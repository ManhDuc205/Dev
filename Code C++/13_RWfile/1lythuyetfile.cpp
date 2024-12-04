#include <iostream>
using namespace std;

/*
ifstream : Đọc file
ofstream : Ghi file và tạo mới
fstream : Cả đọc và ghi file

- Mode:
ios::in : Đọc file
ios::out : ghi file
ios::binary : Mở kiểu nhị phân
ios::app : Mở file lên để ghi nhưng mà ghi vào cuối file
ios::ate : Đặt vị trí của con trỏ file vào cuối file, nếu mà mode không đc 
            bật thì vị trí con trỏ sẽ là đầu file
ios::trunc : Mở file để đọc, những nội dung trước đó trong file sẽ bị mất 
            hết trước khi ghi nội dung mới
*/
