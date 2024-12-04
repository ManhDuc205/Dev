package LAB11_PHAN2;

import java.util.Scanner;

public class SoPhuc {
    private float PT;
    private float PA;

    public SoPhuc(float PT, float PA) {
        this.PT = PT;
        this.PA = PA;
    }

    public SoPhuc() {
    }
    
    public void in() {
        if(PA < 0) {
            System.out.println(this.PT + " - " + (-1) * this.PA + "i");
        } else {
            System.out.println(this.PT + "+" + this.PA + "i");
        }
    }
    public void input() {
        Scanner sc = new Scanner(System.in);
        System.out.print("Nhap phan thuc: "); this.PT = sc.nextFloat();
        System.out.print("Nhap phan ao: "); this.PA = sc.nextFloat();
    }
    
    public SoPhuc nhan(SoPhuc sp) {
        float result_PT = this.PT * sp.PT - this.PA * sp.PA;
        float result_PA = this.PT * sp.PA + this.PA * sp.PT;
        SoPhuc result = new SoPhuc(result_PT, result_PA);
        return result;
    } 
    
    public SoPhuc cong(SoPhuc sp) {
        float result_PT = this.PT + sp.PT;
        float result_PA = this.PA + sp.PA;
        SoPhuc result = new SoPhuc(result_PT, result_PA);
        return result;
    }
}

