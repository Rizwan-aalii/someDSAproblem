#include <iostream>
using namespace std ; 

int main ()
{
    // number value in C++
    const int age =  19 ; 
    cout << age << " Integer Value with Size " << sizeof(age) << endl ; 
    
    // True and False in C++
    bool isEligible = true ; 
    cout << isEligible << " Boolean Value with Size " << sizeof(isEligible) <<  endl ;

    // Decimal Value in C++
    float pyval = 3.14f;
    cout << pyval << " Float Type Vlue with Size " << sizeof(pyval) << "\n" ;
    double price = 1000.00 ;
    cout << price << " Double Type Value with Size " << sizeof(price)  << "\n" ;

    // Single Character 
    char firstchar = 'R' ;
    cout << firstchar << " Char Type Value with Size " << sizeof(firstchar) << endl ;

                            /* Type Conversion */
    // Conversion 
    float smallsize = 100.00 ;
    double bigsize = smallsize ; 

    cout << bigsize << endl;

    // Casting 
    double data = 50.22 ; 
    int newdata = (int) data ; 

    cout <<newdata << "\n" ; 

                            /* Input In C++ */
    cout << "Enter Your Number " << "\'n" ; 
    int number = 10 ; 
    cout << number << endl ;


                            /* Operator */
    int a =  10 ; 
    int b =  5 ;
    cout << "Sum of a + b " << (a + b) << "\n" ;
    cout << " Subt of a -b " << (a - b) << endl ; 
    cout << "Multi of a * b " << (a * b) << endl ; 
    cout << "Divid of a / b " << (a / b) << endl ;
    cout << "Modul of a % b " << (a % b) << endl ; 

    /* task 
    1 Print your name and age.
    2 Take two numbers and print their sum.
    3 Find the factorial of a number using a loop.
    4 Print all numbers divisible by 3 between 1 and 100.
    */
    
    char element ; 
    cout << "Enter Char : " ;
    cin >> element ; 

    if (  element >= 65  && element <= 90 )
     {
        cout << "Element is Uppercase  "; 
    } else {
        cout << " Lower Case Element " << endl ; 
    }

    int i = 1 ; 
    while (i <= 5 )
    {
        cout << i << " " ; 
        i++ ;
    }

    cout << endl ; 

    

    


    return 0 ; 
}