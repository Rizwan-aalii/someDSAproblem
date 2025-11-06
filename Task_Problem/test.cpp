#include <iostream> 
#include <string> 
using namespace std ; 



    

int main ()
 {
    int* arr = new int[3];
    arr[0] = 10;
arr[1] = 20;
arr[2] = 30;

    cout << *(arr + 1);
 

    

    
    return 0 ; 
 }