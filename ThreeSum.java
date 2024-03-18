/* Three Sum - Print triplets that sum up to 0 in an array with all unique elements */

// import java.io.*;
// import java.lang.*;
import java.util.*;

public class ThreeSum {
    private int arr[], n;

    public ThreeSum(int n) {
        this.n = n;
        arr = new int[this.n];
    }

    public void readInput() {
        Scanner sc = new Scanner(System.in);
        for (int i = 0; i < this.n; ++i) {
            arr[i] = sc.nextInt();
        }
        sc.close();
    }

    public void sortArray() {
        for (int i = 0; i < this.n; ++i) {
            for (int j = 0; j < this.n - i - 1; ++j) {
                if (arr[j] > arr[j + 1]) {
                    arr[j] += arr[j + 1];
                    arr[j + 1] = arr[j] - arr[j + 1];
                    arr[j] -= arr[j + 1];
                }
            }
        }
    }

    public void printResult() {
        int j, k, sum;
        for (int i = 0; i < this.n; ++i) {
            j = i + 1; k = this.n - 1;
            while (j < k) {
                sum = arr[i] + arr[j] + arr[k];
                if (sum == 0) {
                    System.out.println("{ " + arr[i] + ", " + arr[j] + ", " + arr[k] + " }");
                    j++;
                    k--;
                }
                else if (sum < 0)
                    j++;
                else
                    k--;
            }
        }
    }

    public void printArray() {
        for (int i = 0; i < this.n; ++i) {
            System.out.print(arr[i] + " ");
        }
        System.out.println();
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();

        ThreeSum t1 = new ThreeSum(n);
        t1.readInput();
        t1.sortArray();
        t1.printArray();
        t1.printResult();
        sc.close();
    }
}
