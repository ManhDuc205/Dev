
package LAB09_PHAN1;

/**
 *
 * @author DucPc
 */
public class Main {
    public static void main(String[] args) {
        double[] numbers = {5.4, 2.3, 9.8, 1.2, 4.5};
        NumList numList = new NumList(numbers);

        // Use BubbleSort
        numList.setBubbleSort();
        numList.setOrder();
        System.out.println("Sorted using BubbleSort: " + java.util.Arrays.toString(numList.getNumList()));

        // Add a new number and use QuickSort
        numList.add(3.6);
        numList.setQuickSort();
        numList.setOrder();
        System.out.println("Sorted using QuickSort: " + java.util.Arrays.toString(numList.getNumList()));
    }
}
