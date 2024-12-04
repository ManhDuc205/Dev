package LAB2_PHAN2_1;

import java.util.Scanner;

/* 
1. Hãy viết một lớp chứa phương thức substr(s1,s2) để tìm dãy con trong một xâu ký tự cho trước, trong
đó s1 là con trỏ đến một đoạn text bất kỳ, s2 – con trỏ tới nơi cần tìm. Trong trường hợp mà tìm được
dãy con thi sẽ vị trí bắt đầu của dãy tìm được, còn trong trường hợp không tìm được thì trả lại giá trị
NULL. 

 */
public class timdaycon {
    public Integer substr(String s1,String s2){
        if (s1 == null || s2 == null) {
            return null;
        }
        
        int vitri = s1.indexOf(s2); // vi tri dau tien cua s2 trong s1
        
        if (vitri == -1) {
            return null; // ko tim thay
        }

        return vitri; // tra ve vitri neu tim thay
    }
    public static void main(String[] args) {
        timdaycon xau = new timdaycon();
        Scanner sc = new Scanner(System.in);
        String s1 = sc.nextLine();
        String s2 = sc.nextLine();
    
    if (xau.substr(s1, s2) != null){
            System.out.println("Tim thay '" + s2 + "' trong '" + s1 + "' tai vi tri: " + xau.substr(s1, s2));
        }
    else{
            System.out.println("NULL");
        }
    }
}