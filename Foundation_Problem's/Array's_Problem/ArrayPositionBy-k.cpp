#include <iostream>

using namespace std ;

void printArray(int size , int arr[]){
    if (size == -1){
        cout << "Array is Empty \n";
    }

    for (int i = 0; i < size; i++){
        cout << arr[i] << " " ;
    }
    cout << endl ;
}

void reverseArray(int size , int arr[]  , int k ){
   if (size == -1){
        cout << "Array is Empty \n";
    }

    for (int i = 0; i < size/2 -k; i++){
        int temp = arr[i];
        arr[i] = arr[size-i-1];
        arr[size-i-1] = temp ;
    }    
}


int main(){

    int size = 8 ;
    int k = 2 ;
    int array[size] = {1,2,3,4,5,6,7,8};

    printArray(size , array);
    reverseArray(size , array , k);
    cout << "After Swaping \n";
    printArray(size , array);

    // second reverse k elements 

    for (int i =1 ; i < k; i++){
        int temp = array[i-1] ; 
        array[i-1] = array[i];
        array[i] = temp ;
    }

    printArray(size , array);

    int start = k ;
    int end = size-1 ;

     while (start <= end){
        int temp = array[end];
        array[end] = array[start];
        array[start] = temp ;
        start++ ;
        end-- ;
     }

     printArray(size , array);
     
    
    
    
    

    return 0 ;
}