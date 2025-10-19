#include <iostream>
#include <string> 

using namespace std ;

class Car {


    string brand ; 
    string color ;
    int speed ;
    
    public :
            Car(string brand , string color , int speed )
            {
                this->brand = brand ;
                this->color = color ;
                this->speed = speed ; 
            }
        
            void showSpeed()
            {
                cout << "Car Speed is " << speed << endl ; 
            }
            ~Car(){
                cout << "We Distroy the Car \n"; 
            }
            void showCarDetails()
            {
                cout << "Car Name : " << brand << " Car Color is : " << color << endl ;
            }
};

int main ()
{
    Car car("Rolls Roylce" , "White" , 250) ;
    car.showSpeed();
    car.showCarDetails();

    return 0 ;
}