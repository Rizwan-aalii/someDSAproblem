
import java.util.Scanner;

public class TransposeMatrix {
    public static void main(String[] args) {
        
        Scanner scan = new Scanner(System.in);
        System.out.println("Enter the row and colum size");
        int row = scan.nextInt() , colum = scan.nextInt();
        System.out.println("Enter the value in matrix ");
        int numbers [][] = new int[row ][colum];
        for(int i = 0 ; i<row ; i++ )
        {
            for(int j = 0 ; j<colum ; j++)
            {
                numbers[i][j] = scan.nextInt();
            }
        }

        // output of numbers 
        for(int i = 0 ;i <row ; i++)
        {
            for(int j =0 ; j<colum ; j++)
            {
                System.out.print(numbers[i][j] + " ");
            }
            System.out.println();
        }

        int matrix [] [] = new int[colum] [row];
        for(int i = 0 ; i<row ; i++)
        {
            for(int j = 0 ; j<colum ; j++)
            {
                matrix[j][i] = numbers[i][j];
            }
        }

        // output
        for(int i = 0 ;i <colum ; i++)
        {
            for(int j =0 ; j<row ; j++)
            {
                System.out.print(matrix[i][j] + " ");
            }
            System.out.println();
        }


    }
}