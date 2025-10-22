import java.util.Arrays;
import java.util.Scanner;

@SuppressWarnings("unused")
public class SelectionSort {
    public static void main(String[] args) {
        
        Scanner scan = new Scanner(System.in);
        System.out.println("Enter the size of Array");
        // Input of size
        int size = scan.nextInt();
        int numbers [] = new int[size];

        System.out.println("Enter the Element In Array");
        // Input of Array
        for(int i = 0 ; i<size ; i++)
        {
            numbers[i] = scan.nextInt();
        }
        System.out.println(Arrays.toString(numbers));

        // Selection Sort 
        // examp. - {14 , 12 , 13 , 11 }
        //            0  , 1  , 2 ,  3 
        for(int i  = 0 ; i<numbers.length - 1 ; i++)
        {

            // get Smallest Value 
            int Smallest = i ; // 0 - 14 
            
            for(int j = i + 1 ; j< size ; j++ ) // 0+1 = 1 = 12
            {
                if(  numbers[j] <  numbers[Smallest]  ) // 12 nim[j] < 14 sm
                {
                    Smallest = j ;   // smallest 12 ; 
                }
            } 
            // swap                                now 
            int temp = numbers[i];             //   temp -14 / num[i] - 14  
            numbers[i] = numbers[Smallest];    //   num[i] 12  / num [sma] 12  
            numbers[Smallest] = temp;          //   num [sma] 14 / tmep 14
            // know smallest is not more smallest 
            // it be like kitna badal gya he re tu  
        }

        // Output
        System.out.println(Arrays.toString(numbers));

    }
}
