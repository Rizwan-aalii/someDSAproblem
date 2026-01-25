
#include <iostream> 

using namespace std ;

int main(){

    int size = 5 ;
    int array[size] = {1 , 2 , 3 , 5 , 6};

    if (size == 0){
        cout << "Array is Emtpy \n";
    }

    for (int i = 0; i < size; i++){
        cout << array[i] << " " ;
    }
    cout << endl ;

    int newarray[size+1] ;
    int target = 3 ;

    for (int i = 0; i < size+1; i++){
        newarray[i] = array[i];
    }

    for (int i = size; i > target; i--){
        newarray[i] = newarray[i-1];
    }

    newarray[target] = 4 ;
    
    for (int i = 0; i < size +1; i++){
        cout << newarray[i] << " " ;
    }


    
    
    
    

    return 0 ;
}