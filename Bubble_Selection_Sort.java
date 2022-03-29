import java.util.*;
public class Sorting {

    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter the number of elements : ");
        int n = sc.nextInt();
        int arr[] = new int[n];
        System.out.println("Enter " + n + " elements :");
        for (int i = 0; i < n; i++)
            arr[i] = sc.nextInt();

        System.out.println("Enter 1 for Bubble Sort, 0 for Selection Sort: ");
        int c = sc.nextInt();
        if(c==1)
            bubbleSort(arr);
        else
            selectionSort(arr);
    }

    static void bubbleSort(int arr[]) {
        int len = arr.length, tmp;
        for (int i = 0; i < len; i++) {
            for (int j = 0; j < len - i - 1; j++) {
                if (arr[j] > arr[j + 1]) {
                    tmp = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j + 1] = tmp;
                }
            }
        }
        System.out.println("\nArray after Bubble Sort :- ;");
        printArr(arr);
    }

    static void selectionSort(int arr[]) {
        int len = arr.length, pos, tmp;
        for (int i = 0; i < len; i++) {
            pos = i;
            for (int j = i + 1; j < len; j++) {
                if (arr[j] < arr[pos])
                    pos = j;
            }
            tmp = arr[i];
            arr[i] = arr[pos];
            arr[pos] = tmp;
        }
        System.out.println("\nArray after Selection Sort :- ;");
        printArr(arr);
    }

    static void printArr(int arr[]){
        for (int i = 0; i < arr.length; i++)
            System.out.print(arr[i] + " ");
        System.out.println();
    }
}
