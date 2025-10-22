
import java.util.Arrays;
import java.util.Scanner;

public class MatrixBubbleSort {
    public static void main(String[] args) {
        
        Scanner scan = new Scanner(System.in);
        System.out.println("Enter the row in array ");
        int rows = scan.nextInt();
        System.out.println("Enter the colum in array ");
        int colum = scan.nextInt();
        int numbers[][] = new int[rows] [colum];
        System.out.println("Enter the element in Array ");
        for(int i =  0 ; i<rows ; i++)
        {
            for(int j = 0 ; j< colum ; j++)
            {
                numbers[i][j] = scan.nextInt();
            }
        }

        int[] flat = new int[rows * colum];
        int index = 0;
        for (int[] row : numbers) {
            for (int num : row) {
                flat[index++] = num;
            }
        }
        System.out.println(Arrays.toString(flat));
         // sorting 

         for (int i = 0; i < flat.length - 1; i++) {
            for (int j = 0; j < flat.length - 1 - i; j++) {
                if (flat[j] > flat[j + 1]) {
                    int temp = flat[j];
                    flat[j] = flat[j + 1];
                    flat[j + 1] = temp;
                }
            }
        }

        System.out.println(Arrays.toString(flat));
        index = 0 ; 
        for(int i = 0 ; i<rows ; i++)
        {
            for(int j = 0 ; j< colum ; j++)
            {
                numbers[i][j] = flat[index++];
            }
        }

        // print
        for(int i = 0 ; i<rows ; i++)
        {
            for(int j = 0 ; j< colum ; j++)
            {
                System.out.print(numbers[i][j] + " ,");
            }
            System.out.println();
        }
         
         

    }
}
