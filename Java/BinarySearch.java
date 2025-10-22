import java.util.Arrays;
import java.util.Scanner;

public class BinarySearch {
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

         for(int i  = 0 ; i<numbers.length - 1 ; i++)
        {     // get Smallest Value 
            int Smallest = i ;  
            for(int j = i + 1 ; j< size ; j++ ) 
            {
                if(  numbers[j] <  numbers[Smallest]  ) 
                {
                    Smallest = j ;    
                }
            } 
            // swap                                 
            int temp = numbers[i];             
            numbers[i] = numbers[Smallest];      
            numbers[Smallest] = temp;          
        }

        System.out.println(Arrays.toString(numbers));

        System.out.println("Enter the Value that we Search in Array");
        int Search = scan.nextInt();
        boolean found = false ;

        int start = 0 , end = numbers.length - 1 ;
        while(start <= end ){
            // mid middle of array like 0 to 6 so mid is 3
            int mid = start + ( end - start ) / 2 ; 

            if (Search == numbers[mid]){
                System.out.println( "Element found at " +  mid);
                found = true;
                break;
            }
            else if (Search > numbers[mid]){
                start = mid + 1 ; 
            }
            else {
                end = mid - 1 ; 
            }
            
        }
        if(!found)
        {
            System.out.println("Element is here  ");
        }
        

    }
}