import java.util.Arrays;
import java.util.Scanner;

public class InserstionSort {
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


        // Inserstion Sort 
        for(int i = 1 ; i < numbers.length ; i++)
        {
            int holdind = numbers[i] ;
            int j = i - 1 ;
            while (j >= 0 && numbers[j] >  holdind )
            { 
              numbers[j + 1] = numbers[j];  
              j--;
            }
            numbers[j + 1 ] = holdind;
        }

        System.out.println(Arrays.toString(numbers)); 

    }
}
