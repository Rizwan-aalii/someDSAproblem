import java.util.Arrays;
import java.util.Scanner;

public class BubbleSort {
    public static void main(String[] args) {
        
        Scanner scan = new Scanner(System.in);
        System.out.println("Enter the size of Array");
        int size = scan.nextInt();
        int numbers [] = new int[size];

        System.out.println("Enter the Element In Array");
        for(int i = 0 ; i<size ; i++){
            numbers[i] = scan.nextInt();
        }
        System.out.println(Arrays.toString(numbers));

        // Bubble Sort 
        for(int i = 0 ; i<size - 1 ; i++){
                for(int j = 0 ; j< size - i - 1 ; j++){
                    // Compare 
                    if(numbers [ j ] > numbers[ j + 1 ]){
                        // Swap
                        int temp = numbers[j + 1 ];
                        numbers[ j + 1 ] = numbers[ j  ];
                        numbers[ j ] = temp;
                    }
                }
        }
        System.out.println(Arrays.toString(numbers));





    }
}