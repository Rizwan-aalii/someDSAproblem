#include <iostream> 

using namespace std ;


void reverseArray(int arr[] , int size){
    int right = 0 ;
    int left = size-1 ;
    while (right <= left){
        int temp = arr[left];
        arr[left] = arr[right];
        arr[right] = temp ;
        right++;
        left-- ;
    } 
}

void printArray(int size , int arr[]){
    if (size == -1 ){
        cout << "Array is Empty \n";
        return ;
    }

    for (int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }
    cout << endl ;
    
    
}

int main(){
    int size = 5 ;
    int array[size] = {1,2,3,4 , 5};
    printArray(size , array);
    cout << "After Reverse Array \n";
    reverseArray(array , size);
    printArray(size , array);
    return 0 ;
}