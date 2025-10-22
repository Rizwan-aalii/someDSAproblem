#include <iostream> 
#include <string> 
using namespace std ; 



    

int main ()
 {
    int size ;
    cout << "Enter the Size of Array : ";
    cin >> size ;
    string* newarra =  returnArray(size) ;
    printarray(newarra , size);
    delete [] newarra ;

    
    return 0 ; 
 }