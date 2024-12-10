package LAB09_PHAN1;

/**
 *
 * @author DucPc
 */
public class NumList {
    private SortAlgo sortAlgorithm;
    private double[] listOfNum;
    private double number;
    
    public int add(double number){
        double[] newListOfNum = new double[listOfNum.length + 1];
        newListOfNum[listOfNum.length] = number;
        return newListOfNum.length;
    }
    public double[] getNumList(){
        return listOfNum;   
    }
    public void setBubbleSort (){
        this.sortAlgorithm = new BubleSort();
    }
    public void setQuickSort (){
        this.sortAlgorithm = new QuickSort();
    }
    public NumList(double[] initialList) {
        this.listOfNum = initialList;
    }
    public void setOrder() {
        if (sortAlgorithm != null) {
            sortAlgorithm.sort(this);
        } else {
            System.out.println("No sorting algorithm set.");
        }
    }
}
