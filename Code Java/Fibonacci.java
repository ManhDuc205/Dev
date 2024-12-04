public class Fibonacci {
    // Phương thức để tính số Fibonacci tại vị trí n bằng đệ quy
    public static int fibonacciRecursive(int n) {
        if (n <= 1) {
            return n;
        }
        return fibonacciRecursive(n - 1) + fibonacciRecursive(n - 2);
    }

    // Phương thức để tính số Fibonacci tại vị trí n bằng vòng lặp
    public static int fibonacciIterative(int n) {
        if (n <= 1) {
            return n;
        }
        int a = 0, b = 1, fib = 1;
        for (int i = 2; i <= n; i++) {
            fib = a + b;
            a = b;
            b = fib;
        }
        return fib;
    }

    public static void main(String[] args) {
        int n = 13; // Ví dụ, chúng ta sẽ tìm số Fibonacci tại vị trí 10

        System.out.println("Fibonacci (đệ quy) của " + n + " là: " + fibonacciRecursive(n));
        System.out.println("Fibonacci (vòng lặp) của " + n + " là: " + fibonacciIterative(n));
    }
}

