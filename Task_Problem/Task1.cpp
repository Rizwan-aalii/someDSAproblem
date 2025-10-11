#include <iostream> 
using namespace std ; 


/*
💻 6. Mini Challenge Tasks

** Try these small programs:**
1 Take a number and print whether it’s odd or even.
2 Take a number n and print sum from 1 to n.
3 Print the table of any number (like 2×1=2 … 2×10=20).
4 Using switch, make a mini calculator (+, -, *, /).*/

int main ()
{
    int num ; 
    cout << "Enter the value : "  ; 
    cin >> num  ;
    cout << endl ; 
    char operato ; 
    cout << "Enter operatore : " ; 
    cin >> operato ; 
    int num2 ; 
    cout << "Enter another value : " ;
    cin >> num2 ; 


    if (num % 2 == 0)
    {
        cout << num  << " is even \n" ; 
    } else{
        cout << num << " is Odd  \n" ; 
    } 


     int sum = num ;
    for (int i= 1; i <= num ; i++)
    {
        sum  += i ; 
    }
    
    
    cout << "sum is :  "  << sum  ; 

    for (int i = 0; i <= 10; i++)
    {
        cout << 2 * i << endl ; 
    }

    switch (operato)
    {
    case  '+':
        cout << num + num2 << endl; 
        break;
    case '-' : 
        cout << num - num2 << endl ;
        break;
    case '*' : 
        cout << num * num2 << endl ; 
        break;
    case '/' : 
        cout << num / num2 << endl ;   
        break; 
    case '%' : 
        cout << num % num2 << endl ; 
        break;
    default: cout << "Enter valid syntax " ; 
        break;
    }
    

    
    return 0 ; 
}