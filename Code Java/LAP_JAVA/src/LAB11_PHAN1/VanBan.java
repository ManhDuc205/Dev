/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package LAB11_PHAN1;

/**
 *
 * @author DucPc
 */
public class VanBan {
    private String st ;
    public VanBan(){
        
    }
    public VanBan(String st){
        this.st = st;
    }
    public int demtu(){
        int count = 0;
        if(st.charAt(0) != ' ') count++;
        for(int i = 0; i < st.length() - 1; i++){
            if(st.charAt(i) == ' ' && st.charAt(i + 1) != ' '){
                count++;
            }
        }
        return count;
    }
    public int demkituH(){
        int count = 0;
        st = st.toLowerCase();
        for(int i = 0; i < st.length() - 1; i++){
            if(st.charAt(i) == 'h' ){
                count++;
            }
        }
        return count;
    }
    
    public String chuanhoa(){
        String[] s = this.st.split("\\s+");
        String ketqua = "";
        for(int i =0 ; i < s.length - 1; i++){
            ketqua += s[i] + " ";
        }
        ketqua += s[s.length - 1];
        return ketqua;
    }
    
}
