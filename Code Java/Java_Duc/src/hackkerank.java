import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class hackkerank {
public static int B;
public static int H;
public static boolean flag = false;
static{
    Scanner sc = new Scanner(System.in);
    H = sc.nextInt();
    B = sc.nextInt();
    sc.close();
    if(B > 0 && H > 0){
        flag = true;
    }
    else{
        System.out.print("java.lang.Exception: Breadth and height must be positive");
    }
    
}

public static void main(String[] args){
		if(flag){
			int area = B*H;
			System.out.print(area);
		}
		
	}//end of main

}//end of class

