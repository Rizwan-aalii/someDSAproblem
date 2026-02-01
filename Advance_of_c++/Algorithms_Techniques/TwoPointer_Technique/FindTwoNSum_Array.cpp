#include <iostream> 

using namespace std ;

void findTwoSumOfTarget(int size , int target , int arr[]){
    if (size == -1){
        cout << "Array is Empty \n";
        return  ;
    }

    int sum = 0 ;
    int left = 0 ;
    int right = size-1 ;
    while (left <= right){
        sum = arr[right] + arr[left] ;
        if (sum == target){
            cout <<   left << " , " <<  right ;
        }
        left++ ;
        right-- ;
    } 
    
    
}

int main(){
    
    int size = 5 ;
    int array[size] = {1,2,4,5,1};
    int target = 7 ;

    findTwoSumOfTarget(size , target , array);
    
    

    return 0 ;
}