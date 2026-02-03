#include <iostream> 
#include <string>

using namespace std ;

int main(){

    // create Array 
    int size = 5 ;
    string names[size] = {"BMW" , "AUDI" , "RANGE-ROVER" , "DISCOVERY" , "MUSTANG"};
    string model [size] = {"M5" , "Tron GT" , "Sport" , "Sport" , "Shelby"};
    cout << endl ;
    for (int i = 0; i < size; i++){
        cout << "Banrd's : " << names[i] << " Model : " << model[i] << " ";
        cout << "Address Of Cars :" << &names[i] << " \n" ;
    }
    cout << endl ;

    // Method 1: With size and values
    double price[5] = {2.01 , 2.75 , 1.13 , 1.25 , 0.74};
    

    // Method 2: With size only (filled with garbage values initially)
    int temperatures[24];   
    
    // Method 3: Without size (compiler counts)
    float rates[] = {10.00, 9.99, 9.75 , 9.90 , 8.90};

    
}

