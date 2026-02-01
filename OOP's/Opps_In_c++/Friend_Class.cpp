#include <iostream>
#include <string> 

using namespace std ;

class GemForm{

    private :
            int members ;
            string name ;
            string partner ; 
            double annualIncome ;

    public :

        // GemForm (int member , string partner , string name , double income ) 
            // {
                // this->members = member ;
                // this->partner = partner ;
                // this->name = name ;
                // this->annualIncome = income ;
            //  } 
        GemForm (int member , string partner , string name , double income) : members (member) , partner (partner) , name (name) , annualIncome (income) {}       

            friend class Gem ;
};

class Gem {

    public :

            void printFormDetails(const GemForm& form)
            {

                cout << "-- Form Details --" << "\n";
                cout << "Form Members No. : " << form.members << "\n" ;
                cout << "First Owner Name :  " << form.name << "\n" ;
                cout << "Second Owner Name :  " << form.partner << "\n" ;
                cout << "Form Annual Revenu : " << form.annualIncome << "\n" ;
            }
};

int main ()
{
    int member = 5 ;
    string owner = "Zahir Mehar " ;
    string partner = "Ajoy Fernendes" ;
    double income = 10000.00 ;
    GemForm gem(member , partner ,owner ,income) ;
    Gem friends ;
    friends.printFormDetails(gem);
    return 0 ;
}