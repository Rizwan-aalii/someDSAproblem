#include <iostream> 
#include <cmath>

using namespace std ;

// Pythagoras Theorem

void pythanorasTheorem(int one , int two ){
    
}

void hypotenuseTheorem(int oneval , int twoval , int hypo){
        int hypotenuse = hypo;
        hypotenuse = hypotenuse * hypotenuse ;
        if (hypotenuse == (oneval * oneval) + (twoval * twoval))
        {
            cout << "result true \n";
        }
        else {
            cout << "result is False \n";
        }
        
}

int main(){

    hypotenuseTheorem(12,5,13);
    return 0 ;
}