#include <iostream>

int main(){

    int size =  5 ;
    int array [size] = {1 , 1 , 1 , 3 ,3 };

    for (int i = 0; i < size; i++)
    {
        std::cout << array[i] << " " ;
    }
    std::cout << std::endl ;

    int count = 0 ;

    for (int i = 0; i < size; i++){
        for (int j = 0; j < size; j++){
            if (array[i] == array[j]){
                count++ ;
            }
            else{
                count = 0 ;
            }
            if (!(count == 0 || count == 1)){
            std::cout << array[i] << " Element : Appear " << count << std::endl ;
        } 
        }

             
    }
    
    
}