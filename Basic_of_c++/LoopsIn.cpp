#include <iostream> 
using namespace std ; 

int main ()
{
    cout << "for Loop " << endl ; 
    for (int  i = 1; i <= 5; i++)
    {
        cout << i  ; 
    }
    cout << endl ; 


    int j = 1 ; 
    cout << "while Loop " << endl ; 
    while (j < 6)
    {
        cout << j ;
        j++ ;  
    }
    cout << endl ; 

    cout << "do while Loop " << endl ; 
    int k = 1 ; 
    do
    {
        cout << k ; 
        k++ ; 
    } while (k < 1);   // run atleast one time 
    cout << endl ;  
    
        
    return 0 ; 
}