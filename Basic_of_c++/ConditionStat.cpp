#include <iostream> 
using namespace std ; 

 int main () {

    int totalScore = 355 ; 
    if (totalScore >= 349)
    {
        cout << "you win the match \n" ; 
    } else {
        cout << " good luck for next time \n" ; 
    }
    
    int batsmanScore = 55 ; 

    if (batsmanScore >= 50 && batsmanScore <= 100 )
    {
        cout << "Half Century of Batman \n " ; 
    } else if (batsmanScore >= 100 && batsmanScore <= 150)
    {
        cout << "Century of Batman \n " ; 
    } else {
        cout << "batsman Scor: " << batsmanScore << endl ; 
    }
    
    

    switch (batsmanScore)
    {
    case  50 :
        cout << "Half Century of Batman \n " ; 
        break;
    case 100 : 
        cout << " Century of Batman \n " ; 
        break;
    default: 
        cout << " not valid score \n " ; 
        break;
    }
    
    
    
    return 0 ; 
 }