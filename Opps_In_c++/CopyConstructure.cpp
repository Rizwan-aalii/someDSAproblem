#include <iostream> 
#include <string> 

using std :: string ;

class SBI_Form{

private :
            string* name ;
            int age ;
            double deposite ;

public :
            // .. Main Constucture Fill Value in to object 
            SBI_Form(string name , int age , double amt )
            {
                this->name = new string(name) ;
                this->age = age ;
                this->deposite = amt ;
            }

            string getName ()
            {
                return *name ;
            }
            void setName(string name)
            {
                this->name = new string(name) ;
            }

            int getAge ()
            {
                return age ;
            }
            void setAge (int age)
            {
                this->age = age ;
            }

            double getDeposite ()
            {
                return deposite ;
            }
            void setDeposite (double amt)
            {
                this->deposite = amt ;
            }

            void displayFormDetails()
            {
                std ::cout << "-- Form Details -- \n";
                std ::cout << "Account Holder Name : " << *name << std::endl ;
                std ::cout << "Account Holder Age : " << age << std::endl ;
                std ::cout << "Deposite Amount : " << deposite << std::endl ;
            }

            // Duplicate is Copy Constructure
            SBI_Form(SBI_Form* duplicate)
            {
                this->name = new string(*duplicate->name);
                this->age = age ;
                this->deposite = deposite ;
                std ::cout << "Duplicate Consturcture called " ;
            }

            ~SBI_Form()
            {
                delete name ;
                std ::cout << "Distructure called \n";
            }


};

int main ()
{

    string name = "Rizwan Khan ";
    int age = 20 ;
    double rupee = 1200.00;

    SBI_Form sbiform( name , age , rupee);
    sbiform.displayFormDetails();
    SBI_Form nextform = sbiform ;
    nextform.setName("Abdul Rehman");
    nextform.setAge(16);
    
    
    nextform.displayFormDetails();

    return 0 ;
}