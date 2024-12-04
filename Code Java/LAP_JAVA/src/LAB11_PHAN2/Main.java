package LAB11_PHAN2;

/**
 *
 * @author DucPc
 */
public class Main {
    public static void main(String[] args) {
        SoPhuc a = new SoPhuc();
        SoPhuc b = new SoPhuc();
        SoPhuc c = new SoPhuc();
        
        a.input();
        b.input();
        c = a.nhan(b);
        c.in();
    }
}

