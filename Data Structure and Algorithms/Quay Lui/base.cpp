#include <iostream>
using namespace std;
int n, X[100];
void Try(i){
    Thử gán các giá trị có thể cho phần tử X[i]

    for (int j = <Giá trị 1> ... <Giá trị m>){

        <Kiểm tra xem có thể gán được j cho X[i] hay không>
        X[i] = j;

        < Kiểm tra xem i có là phần tử cuối cùng của cấu hình hay không  >
        if(i == n){

            <Tìm được một cấu hình>
        }
        else{

            <Tiếp tục đi xây dựng phần tử thứ i + 1>
            Try(i + 1);
        }
        <Back track>
        <Bỏ ghi nhận X[i] = j>
    }
}