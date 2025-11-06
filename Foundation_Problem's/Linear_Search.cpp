#include <iostream>
#include <string>

using std :: string ;

void printarray(int arr[] , int size )
    {
       std :: cout << "[" ;
        for (int  i = 0; i < size; i++)
        {
           std ::  cout << arr[i]  ; 
            if (i < size - 1 )
            {
               std :: cout << "," ;
            }
            
        } 
        std ::cout << "] \n   " ; 
        
    }

bool findXinArray(int arrr[] , int x , int size )
{
     bool found = false ;

     for (int i = 0; i < size; i++)
     {
        if (arrr[i] == x)
        {
            std::cout <<"Value found : " << arrr[i] << " At Index : " << i << "\n";
            found = true ;
        }  
     }
     if (!found  == true)
     {
        std::cout <<"Value Not found At Array " << "\n";
            found = false ;
     }
     
     return found ;

     
}
void findXinArray(int arrr[] , int x , int size , int value )
{
   bool found = false ;
     for (int i = 0; i < size; i++)
     {
        if (arrr[i] == x)
        {
            arrr[i] = value ;
            found = true ;
            std::cout <<"Value found : " << arrr[i] << " At Index : " << i << " and Change by : " << value << "\n";
        }  
     }
     if (!found  == true)
     {
        std::cout <<"Value Not found At Array " << "\n";
     }
     printarray(arrr , size);
          
}



string intbool(bool value)
{
    string boolean = "False";
    if (value == 1)
    {
        boolean = "True";
    }else{
        boolean = "False";
    }
    return boolean ;
    
}

int main ()
{

    int size = 5 ;
    int arr[size] = {5, 15, 15, 20, 25};
    int x = 15 ;
    int change = 99 ;
    findXinArray(arr , x , size , change);
}