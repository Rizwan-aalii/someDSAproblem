#include <iostream>

using namespace std ;


int main(){
    int size = 4 ;
    int array[size] = {2,7,11,15};
    
    int target = 9 ;

    for (int i = 0; i < size; i++)    {
        int sum = array[i] + array[i+1];
        if (sum == target){
            cout << i << " " << i+1 ;
        }
    }
    cout << endl ;
    
}