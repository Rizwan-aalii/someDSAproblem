#include <iostream>
#include <string>

using std :: string ;

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
     return found ;

     
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
    int arr[size] = {5, 10, 15, 20, 25};
    int x = 20 ;
    bool found = findXinArray(arr , x , size);
    string result = intbool(found);
    std ::cout << result << "\n" ;
}