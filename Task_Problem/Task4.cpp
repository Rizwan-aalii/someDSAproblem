#include <iostream>
#include <string> 

using namespace std ;


void printarray (int array[] , int size )
{
    cout << "[" ;
    for (int i = 0; i < size; i++)
    {
        cout <<  array[i]  << "," ;
    }
    cout << "] \n" ; 
    
}

int main ()
{
    int array[5] = {4, 8, 12, 16, 20} ;
    int sum = 0 ;
    printarray(array , 5);
    for (int i = 0; i < 5; i++)
    {
        sum += array[i] ;
    }

    cout << "Total sum is : " << sum << "\n" ;
    
}