#include <iostream>
#include <string>

using namespace std ;

class Chai {

    private :
        string nameOfChai ;
        int serving ;
    public :
        Chai(string name , int serv)
        {
            this->nameOfChai = name ;
            this->serving = serv ;
        }
        int getServing()
        {
            return serving +1 ;
        }
        // Chai(string chai ) : Chai(nameOfChai(chai) , 1) {}
        friend void numberOfChai(Chai &chai);
};

void numberOfChai( Chai  &chai) 
{
    cout << chai.serving + 1 << endl;
}

int main ()
{
    string name = "malaiChai" ;
    int serv = 5 ;

    Chai chai(name , serv);
    int cha = chai.getServing();
    numberOfChai(chai);
    cout << cha << "\n" ;
    

    return 0 ;
}