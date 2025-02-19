public class testloop {
    
    public static void main( String args []){
         /* Q2.
            *****
            *   *
            *   *
            *****
         */

        for(int k =1 ; k<=4; k++){
            for(int g = 1; g<=5; g++){
                if(k == 1 || g == 1 || k == 4 || g == 5 ){
                    System.out.print('*');
                } else{
                    System.out.print(" ");
                }
            }

            System.out.println();
        }

         /*
    *      * 
    **    **
    ***  ***    
    ********
    ********
    ***  ***
    **    **
    *      *
     */
    int n = 4;

    for(int i = 0; i<=n ; i++ ){
       for(int j = 1; j<=i ; j++){
           System.out.print("*");
       }
       for(int j = 1; j<=2*(n-i); j++){
           System.out.print(" ");
       }
       for(int j = 1; j<=i ; j++){
           System.out.print("*");
       }
       System.out.println(); 
    }

    for(int i = 0; i<=n ; i++ ){
       for (int j = 1; j <= n - i  ; j++) {
           System.out.print("*");
       }
       for (int j = 1; j <= 2 * (i - 1); j++) {
           System.out.print(" ");
       }
       for (int j = 1; j <= n - i ; j++) {
           System.out.print("*");
       }
       System.out.println(); 
    }






    }
}
