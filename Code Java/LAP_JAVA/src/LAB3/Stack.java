package LAB3;

/**
 *
 * @author DucPc
 */
public class Stack {
    private int size;
    private Node top;
    public void push(int a){
        Node tmp = new Node(a);
        if(top == null){
            top = tmp;
        }
        else {
            tmp.next = top;
            top = tmp;
        }
        size++;
    }
    
    //pop( ): nếu ngăn xếp không rỗng, lấy phần tử trên đỉnh ngăn xếp ra khỏi ngăn xếp,trả về giá trị của phần tử đó; nếu ngăn xếp rỗng, trả về giá trị -1.
    public int pop(){
        int tmp ;
        if(top != null){
            tmp = top.item;
            top = top.next;
            size--;
            return tmp;
        }
        else return -1;
        
    }
    //isEmpty( ): trả về giá trị true nếu ngăn xếp rỗng, ngược lại trả về false. 
    public boolean isEmpty(){
        return top == null;
    }
    
    //numOfElement( ): trả về số phần tử hiện có trong ngăn xếp. 
    public int numOfElement(){
        
        return size;
    }
    
    /*search( ): tìm kiếm một số nguyên trong ngăn xếp. Nếu tìm thấy, hàm trả lại số
    thứ tự của node trong ngăn xếp chứa giá trị nguyên này. Nếu không tìm thấy, hàm
    trả về 0. */
    public int search(int a){
        Node t = top;
        int tmp = a;
        int vitri = 1;
        while(t != null){
            if(t.item == tmp){
                return vitri;
            }
            t = t.next;
            vitri++;
        }
        return 0;
    }
    
    //display( ): in ra danh sách các phần tử hiện có trong ngăn xếp
    public void display(){
        Node t = top;
        if(t == null){
            System.out.println("Danh sach trong");
        }
        else{
            while(t != null){
                System.out.print(t.item + " ");
                t = t.next;
            }
            System.out.println();
        }
    }
}
