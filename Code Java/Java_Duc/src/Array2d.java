// nhân ma trận: Giả sử có 2 ma trận a cỡ nxm, ma trận b cỡ pxq, để ma trận a có thể
//nhân với ma trận b thì số cột của ma trận a, tức là m phải bằng số hàng
//của ma trận b, tức là p.
//a[n][m] x b[p][q] = c[n][q]
import java.util.Scanner;

public class Array2d {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt(); // so hang ma tran a
        int m = sc.nextInt(); // so cot ma tran a, so hang ma tran b
        int p = sc.nextInt(); // so cot ma tran b
        int [][] a = new int[n][m];
        int [][] b = new int[m][p];
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                a[i][j] = sc.nextInt();
            }
        }
        for(int i = 0; i < m; i++){
            for(int j = 0; j < p; j++){
                b[i][j] = sc.nextInt();
            }
        }
        int[][] c = new int[n][p];
        for(int i = 0; i < n; i++){
            for(int j = 0; j < p; j++){
                c[i][j] = 0;
                for(int k = 0; k < m; k++){
                    c[i][j] += a[i][k] * b[k][j];
                }
            }
        }
        System.out.println("Ma tran ket qua:");
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < p; j++) {
                System.out.print(c[i][j] + " ");
            }
            System.out.println();
        }
        
        sc.close();
    }
}
