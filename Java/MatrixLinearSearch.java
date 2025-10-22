
import java.util.Scanner;

public class MatrixLinearSearch {
    public static void main(String[] args) {
        
        Scanner scan = new Scanner(System.in);
        System.out.println("Enter the row size");
        int row = scan.nextInt();
        System.out.println("Enter the colum size");
        int colum = scan.nextInt();
        int numbers[][] = new int[row] [colum];
        System.out.println("Enter the element in the array");
        for(int i = 0 ; i<row ; i++)
        {
            for(int j = 0 ; j<colum ; j++ )
            {
                numbers[i][j] = scan.nextInt();
            }
        }
         // search element in 2d Array
         System.out.println("Enter the element you find in Array");
         int search = scan.nextInt();
            // output of value
         for(int i = 0 ; i<row ; i++)
        {
            for(int j = 0 ; j<colum; j++ )
            {
                if(numbers[i][j] == search) 
                {
                     System.out.println("Found at position: (" + i + ", " + j + ")");
                    break;
                }
                
            }
            
        }

        
        
    }
}