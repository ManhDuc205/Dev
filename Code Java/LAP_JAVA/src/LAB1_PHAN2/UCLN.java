
package LAB1_PHAN2;

/*
Viết các hàm sau và kiểm tra kết quả trong phương thức main
a. Viết hàm tìm ước số chung lớn nhất của 2 số nguyên a và b
b. Viết hàm tính fibonaci (int n) 
 */
public class UCLN {
    int a, b;
    public int gcd(int a, int b){
        int du = 0;
        while(b != 0){
            du = a % b;
            a = b;
            b = du;
        }
        return a;
    }
    public int fibonacci(int n){
        if(n <= 1){
            return n;
        }
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}
