import java.util.Scanner;

public class MatrixBasics {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
         System.out.println("Enter the size of Array");
         int row = scan.nextInt();
         int col = scan.nextInt();
         int numbers [][] = new int[row] [col];



         System.out.println("Enter the Element In Array");
         for(int i = 0 ; i<row ; i++)
         {
             for(int j = 0 ; j < col ; j++)
             {
                 numbers[i][j] = scan.nextInt();
             }
         }
        
        System.out.println("output of Array Element ");
        
        //Rows wise Print value
        for(int i = 0 ; i<numbers[0].length; i++)
        {
            for(int j = 0 ; j<numbers.length ; j++)
            {
                System.out.print(numbers[j][i]);
            }
            System.out.println();
        }

        // Colum wise Print value 
        System.out.println("Colum wise Print ");
        for(int i = 0 ; i<numbers.length ; i++)
        {
            for(int j = 0 ; j <numbers[i].length ; j++)
            {
                System.out.print(numbers[i][j] + " ");
            }
            System.out.println();
        }

    }
}
