#include <iostream> 

using namespace std ;

void printArray ( const  int size, int arr[])  {
    if (size == 0 || size == -1){
        cout << "Array is Empty \n";
        return ;
    }

    for (int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }
    cout << endl ;
}

void updateArray(int index ,int val , int arr[] , int size){
    if (size == 0 || size == -1){
        cout << "Array is Empty \n";
        return ;
    }
    // we chang index value from array 
    for (int i = 0; i < size; i++){
        if (i == index){
            arr[i] = val ;
        }
    }
    return ;
}

// this give us Error 
void updateElement  ( const int index ,int val , int arr[] , int size){
    if (size == 0 || size == -1){
        cout << "Array is Empty \n";
        return ;
    }
    // we chang index value from array But Nothing Happend
    for (int i = 0; i < size; i++){
        if (i == index){
            arr[i] = val ;
        }
    }
    return ;
}

// this is not change actual value 
void updatetotal(int total){
    total += 5 ;
}
// this is change actual refrence of variable
void updateTotalre(int & total){
    total += 5 ;
}

int main(){
    int size = 5 ;
    int array [size] = {1,2,3,4,5};
    printArray(size , array);
    int total = 100 ;
    cout << total << " Total Print \n";
    updatetotal(total);
    cout << "After Pass By Value \n";
    cout << total << " Total Print \n";
    updateTotalre(total);
    cout << "After Pass By Refre \n";
    cout << total << " Total Print \n"; 

    int index = 3;
    int val = 9;
    updateArray(index , val , array , size);
    cout << "After Inserted Value \n";
    printArray(size , array);

    cout << "Try to change Const But Nothing Happend \n";
    updateElement(2 , 3 , array , size);
    printArray(size , array);


}