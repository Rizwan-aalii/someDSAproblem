#include <iostream>

using namespace std ;

int main(){
    int age = 20 ;
    int* ptOfAge = &age;
    int* addAge = ptOfAge + 2 ;
    cout << "Address of PtOfAge : " << ptOfAge << " \n" ;
    cout << "Address of AddAge : " << addAge << " \n" ;
    cout << "Address of AddAge : " << &addAge << " \n" ;
    return 0 ;
}