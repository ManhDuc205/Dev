package LAB2_PHAN2_2;

import java.util.Scanner;

/**
 *
 * @author DucPc
 */
public class lienketdaycon {
    public Object[] concat(String s1, String s2){
        int vitri = s1.length();
        String s3 = s1 + s2;
        return new Object[] {s3 , vitri}; 
    }
    public static void main(String[] args) {
        lienketdaycon lk = new lienketdaycon();
        Scanner sc = new Scanner(System.in);
        String s1 = sc.nextLine();
        String s2 = sc.nextLine();
        Object[] ketqua = lk.concat(s1, s2);
        System.out.println(ketqua[0] );
        System.out.println(ketqua[1]);
    }
}

