
import java.util.Scanner;

public class SpiralMatrixTraversal {
    public static void main(String[] args) {
        
        Scanner scan = new Scanner(System.in);
        System.out.println("Enter the size in matrix");
        int row = scan.nextInt() , colum = scan.nextInt();
        System.out.println("Enter Element in  arrays");
        int numbers[][] = new int[row][colum] ;
        // geting input in terminal
        for(int i = 0 ; i<row ; i++)
        {
            for(int j = 0 ; j<colum ; j++)
            {
                numbers[i][j] = scan.nextInt();
            }
        }
        // print value 

        for(int i = 0 ; i<row ; i++)
        {
            for(int j = 0 ; j<colum ; j++)
            {
                System.out.println(numbers[i][j]);
            }
        }
        // spiral 
        int top = 0;
        int bottom = numbers.length - 1;
        int left = 0;
        int right = numbers[0].length - 1; 

        while (top <= bottom && left <= right) {
        // 1. Print top row (left to right)
        for (int i = left; i <= right; i++) {
            System.out.print(numbers[top][i] + " ");
        }
        top++; 

       
        for (int i = top; i <= bottom; i++) {
            System.out.print(numbers[i][right] + " ");
        }
        right--; 

       
        if (top <= bottom) {
            for (int i = right; i >= left; i--) {
                System.out.print(numbers[bottom][i] + " ");
            }
            bottom--; 
        }

        if (left <= right) {
            for (int i = bottom; i >= top; i--) {
                System.out.print(numbers[i][left] + " ");
            }
            left++; // Move left boundary right
        }
    }







    }
}
