#include <iostream> 

int main(){
    
    int size = 5 ;
    int array[size] = {1,3,5,4,2} ;

    // swape array at the one time two elemnt swape first and last ans so on.......

    std::cout << "Before Reverse \n";
   

    if (size == -1){
        
        std::cout<< "Array is Empty \n" ;
    }
    

    for (int i = 0; i < size; i++)
    {
        std:: cout<< array[i] << " ";
    }
    std:: cout << std::endl ;

    // reverse array

    for (int i = 0; i < size /2; i++)
    {
        int temp = array[i] ;
        array[i] = array[size-1-i];
        array[size-1-i] = temp ;
    }

    std::cout << "After Reverse \n";

    for (int i = 0; i < size; i++)
    {
        std:: cout<< array[i] << " ";
    }
    std:: cout << std::endl ;
    
    

    return 0 ;
}