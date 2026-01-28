#include <iostream>

using namespace std ;

int main(){
    int size = 5 ;
    int total = 0 ;
    int array [size] = {1,2,3,4,5};
    for (int i = 0; i < size; i++){
        total+=array[i];
    }
    cout << total ;
    
    
    return 0 ;
}