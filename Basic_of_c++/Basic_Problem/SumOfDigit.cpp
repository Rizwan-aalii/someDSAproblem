#include <iostream> 

using namespace std ;

int sumofDigit(int num){
    int sum = 0 ;

    while (num != 0){
        
        int last = num % 10 ;

        sum+= last ;

        num /=  10 ;
    }

    return sum ;
    
}

int main(){
    int digit = 215;

    int sum = sumofDigit(digit);
    cout << sum ;

    return 0 ;
}