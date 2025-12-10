#include <iostream> 
#include <string>

using namespace std ;

int changeinArray(int arr[] , int size  , int value)
{
    arr[0] = value ;
    return value ; 
}

int main ()
{
    int arr[2] = {1 , 2 };
    int value = 3 ;
    int man = changeinArray(arr , 2 , value);
    cout << man << endl ;
    for (int i = 0; i < 2; i++)
    {
        cout << arr[i]  << " ";
    }
          // ?

    
}