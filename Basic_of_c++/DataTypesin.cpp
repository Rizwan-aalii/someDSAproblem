#include <iostream>
#include <string> 
using namespace std ; 


int main ()
{   
    // sell unit calc
    int sellPrice = 3149 ;
    int qty = 1;
    int total = sellPrice * qty ; 
    cout << "Bill Amount " << total << endl ;

    // purchase unit calc
    int purchase = 2549 ; 
    int purchaseBill = purchase * qty ; 
    cout << "Purchase Bill Amount " << purchaseBill << endl ; 

    // margin and profit calc
    unsigned short profit =  total  - purchaseBill  ;
    cout << "Profit Calc " << profit << endl ;
    float margin = (float) profit / purchaseBill ;
    short overalMargin = margin * 100 ;   
    cout << "Margin " << overalMargin << endl ;   

    // ASCII Value 
    char role = 'A' ; 
    int data = role + 2 ; 
    char newvalue = (char) data ; 
    cout << newvalue << endl ;

    // Strings in C++
    string name ; 
    string lastname  ;
    cout << "Enter Your FirstName and LastName \n" ;
    cin >> name  ; 
    cin >> lastname ;   
    cout << name + " " +  lastname << endl ; 
    

    return 0 ; 
}