package LAB09_PHAN1;

/**
 *
 * @author DucPc
 */
public class QuickSort implements SortAlgo{
    @Override
    public void sort (NumList numList){
        double[] list = numList.getNumList();
        int n = list.length;
        quickSort(list, 0, n - 1);
        
    }
    public int partition(double list[], int l, int r){
        double pilot = list[r];
        int i = l - 1;
        for(int j = l; j < r; j++){
            if(list[j] <= pilot){
                ++i;
                double temp = list[i];
                list[i] = list[j];
                list[j] = temp;
            }
        }
        // dua con tro ve giua
        ++i;
        double temp = list[i];
        list[i] = list [r];
        list[r] = temp;
        return i;
    }
    public void quickSort(double list[], int l, int r){
        if(l >= r) return;
        int p = partition(list, l, r);
        quickSort(list, l, p - 1);
        quickSort(list, p + 1, r);
    }
}
