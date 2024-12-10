package LAB09_PHAN1;

/**
 *
 * @author DucPc
 */
public class BubleSort implements SortAlgo {
    @Override
    public void sort (NumList numList){
        double[] list = numList.getNumList();
        int n = list.length;
     
        for(int i = 0 ; i < n - 1 ; i++){
            for(int j = i + 1; j < n; j++){
                if(list[i] > list[j]){
                    double temp = list[i];
                    list[i] = list[j];
                    list[j] = temp;
                }
            }
        }
        
    }
}
