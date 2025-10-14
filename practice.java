import java.util.*;

public class practice {
    
    public static void main(String args[]) {
        int arr[] = {7, 8, 3, 1, 2};

        // Bubble Sort
        for (int i = 0; i < arr.length - 1; i++) { 
            for (int j = 0; j < arr.length - i - 1; j++) { 
                if (arr[j] > arr[j + 1]) { 
                    // Swap
                    int temp = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j + 1] = temp;
                }
            }
        }

        // Print sorted array
        System.out.println(Arrays.toString(arr));
    }
}
