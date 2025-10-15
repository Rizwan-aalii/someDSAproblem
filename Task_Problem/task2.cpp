#include <iostream> 
#include <string> 
using namespace std ; 

int main ()
 {
    string code ; 
    cout << "Enter kayword Print code "; 
    cin >> code ; 

  switch (code )
  {

  case "check num"  :
     for (int i = 3; i <= 100; i++)
   {
        if ( i % 3 == 0)
        {
            cout << "number is dividable : " << i << endl ; 
        }
        
   }
    break;

  case "factorial" : 
   int count = 0; 
   for(int i = 1 ; i < number ; i++)
    {
        cout << (number - count) * (number - i) << endl ;
        count ++ ;   
    }
    break;

    case "months" :
    int months ; 
   cout << "Enter the Months No. : " ; 
   cin >> months ; 
   switch (months)
   {
   case 1 :
    cout << "January" ; 
        break;
   case 2 : 
   cout << "February" ; 
        break;
    case 3 : 
    cout << "March" ; 
        break;
    case 4 : 
    cout << "April" ; 
        break; 
    case 5 : 
    cout << "May" ; 
        break; 
    case 6 : 
    cout << "June" ; 
        break; 
    case 7 : 
    cout << "July" ; 
        break; 
    case 8 : 
    cout << "August" ; 
        break;   
    case 9 : 
    cout << "September" ; 
        break;
    case 10 : 
    cout << "October" ; 
        break; 
    case 11 : 
    cout << "November" ; 
        break; 
    case 12 : 
    cout << "December" ; 
        break;                                        
   default:
   cout << "Enter the valid month number \n"; 
    break;
   }

   break;

   case "sum print" :
   int number ; 
   cout << "Enter the Number \n" ; 
   cin >> number ; 
   for (int  i = number; i > 0 ; i--)
   {
     cout << i << endl ; 
   }
   break;

  default:
    break;
  }
    return 0 ; 
 }