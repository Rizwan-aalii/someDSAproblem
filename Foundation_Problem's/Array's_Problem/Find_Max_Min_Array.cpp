#include <iostream> 

using namespace std;

int main(){
    
    int size = 6 ;
    int array[size] = {1,2,4,5,8,9};

    if (size == -1){
        cout << "Array is Empty \n";
    }
    
    cout << "-- Array is Print -- \n";

    for (int i = 0; i < size; i++){
        cout << array[i] << " " ;
    }
    cout << endl;
    
    int min = array[0];
    int max = array[0];

    for (int i = 1; i <size; i++){
        if (array[i] > max){
            max = array[i];
        }
        if (array[i] < min){
            min = array[i] ;
        }        
    }

    cout << "Array's Biggest Element : " << max <<endl ;
    cout << "Array's Smallest Element : " << min <<endl ;
    

    return 0 ;
}