import java.util.Arrays;
import java.util.Scanner;

public class Reverse {
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
        // Reverse Array 

        for(int i = 0 ; i<numbers.length ; i++)
        {
            // inner loop 
            for(int j = 0 ; j<numbers.length / 2 ; j++)
            {
                // swap
                int temp = numbers[j];
                numbers[j] = numbers[numbers.length - j - 1];
                numbers[numbers.length - j - 1] = temp ;
            }
        }

        System.out.println(Arrays.toString(numbers));


    }
}
