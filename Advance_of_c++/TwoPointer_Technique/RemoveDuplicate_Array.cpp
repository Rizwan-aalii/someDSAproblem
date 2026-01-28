#include <iostream>

using namespace std ;

int findUniqueEle(int size , int arr[]) {
    if (size == -1){
        cout << "Array is Empty \n";
        return 0 ;
    }
    
    int count = 0;

    for (int i = 1; i < size; i++){
        if (arr[i-1] != arr[i]){
           count++ ;
        }  
    }  
    return count +1 ;
    
}

int main(){
    int size = 7 ;
    int array[size] = {1,1,2,3,3,4,5};

    int value = findUniqueEle(size , array);
    cout << value ;
    return 0 ;
}