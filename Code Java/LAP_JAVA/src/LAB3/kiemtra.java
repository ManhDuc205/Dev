package LAB3;

public class kiemtra {
    public static void main(String[] args) {
        Stack stack = new Stack();
        stack.push(5);
        stack.push(10);
        stack.push(15);
        stack.push(20);
        System.out.println("Cac phan tu hien co: ");
        stack.display();
        
        System.out.println("Pop() phan tu: " + stack.pop());
        
        System.out.println("Cac phan tu hien co: ");
        stack.display();
        
        System.out.println("Kiem tra isEmpty: " + stack.isEmpty());
        
        System.out.println("So phan tu hien co trong stack: " + stack.numOfElement());
        
        int a = 5;
        int vitri = stack.search(a);
        if(vitri != 0){
            System.out.println("Tim thay o vi tri: " + vitri);
        }
        else System.out.println("Khong tim thay!");
        
    }
}
