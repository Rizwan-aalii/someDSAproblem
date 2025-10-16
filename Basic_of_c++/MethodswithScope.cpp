#include <iostream> 
#include <string> 
using namespace std ; 

string evenOddCheck (int num ) 
{
    if (num % 2 == 0)
    {
        return "Number is Even " ; 
    }
    else {
        return " Number is Odd " ; 
    }
    
}

 void findmax (int a , int b )
 {
    if ( a > b )
    {
       cout << "number a : " << a << " greator then b :  " << b << endl ; 
    }
    else{
       cout << "number a : " << a << " less then b :  " << b << endl ; 
    }
    
 }

 int factorial(int n)
 {
    if (n == 0 )
    {
        return 1 ; 
    } 
    return n * factorial( n - 1 ); 
    
 }

 void tablePrint(int n )
 {
    for (int i = 1; i <= 10; i++)
    {
        cout << i * n << endl  ; 
    }
    
 }

 void swapingwavl (int a , int b )
 {
    int temp = a; 
    a = b ; 
    b = temp ; 
    cout << "variable a " << a << " variable b " << b << endl ;
 }

 void valuechange(int &data)
 {
   data = 5 + data ;
   cout << " Values is " << data  << endl ; 
 }



int main ()
 {
    int num = 15 ; 
    int valdata = 5 ; 
   string check =  evenOddCheck(num) ; 
   cout << check << endl ; 
   findmax(5 , 15); 
   int fact = factorial(5);
   cout << fact << endl ;  
   tablePrint(2);
   swapingwavl(5 , 2 );
   valuechange(valdata);
   cout << "Value data : " << valdata << endl ; 

   // labda method
   auto variables = [](char cha){
      cout << "Lambda is priting " << cha << endl;
   };
   variables('b');
   
    
    return 0 ; 
 }

