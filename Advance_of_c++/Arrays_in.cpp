#include <iostream>
#include <string>

using namespace std ; 


// method with Array
    void printarray(int arr[] , int size )
    {
        cout << "[" ;
        for (int  i = 0; i < size; i++)
        {
            cout << arr[i]  ; 
            if (i < size - 1 )
            {
                cout << "," ;
            }
            
        } 
        cout << "] \n   " ; 
        
    }
    

 void printarray(string arr[] , int size )
    {
        cout << "[" ;
        for (int  i = 0; i < size; i++)
        {
            cout << arr[i]  ; 
            if (i < size - 1 )
            {
                cout << "," ;
            }
            
        } 
        cout << "] \n   " ;
        cout << "\n" ; 
        
    }

  // method return Array using Pointer
  
  int* returnIntegerArray(int size )
  {
    int* point = new int[size];
    cout << "Enter The Value in Array : ";
    for (int i = 0; i < size; i++)
    {
        cin >> point[i];
    }
    return point ;
    
  }

  string* returnArray(int size )
  {
    string* point = new string[size];
    cout << "Enter The Value in Array : ";
    for (int i = 0; i < size; i++)
    {
        cin >> point[i];
    }
    return point ;
    
  }

  

  // method return Array 
    

int main ()
{

    // .. initisilize array
    int arr [5] = {15 , 14 , 10 , 5 , 6};
    
    printarray(arr , 5);

    cout << "Anoter Declaration of array \n" ;

    int newarr [2] ;
    newarr[0] = 15 ;
    newarr[1] = 14 ;
    cout << newarr[0] << endl ;

    // input and output array

    int size ;
    cout << "enter the size in of Array : " ;
    cin >> size ;

    int marks[size] ;
    cout << "enter the Element's in Array \n" ;
    for (int  i = 0; i < size; i++)
    {
        cin >> marks[i] ;
    }

    printarray(marks , size );
    int* point =  returnIntegerArray(size);
    printarray(point , size);



    delete [] point ;

    


    

    

    return 0 ;
}