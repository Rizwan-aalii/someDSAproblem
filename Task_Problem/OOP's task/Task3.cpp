#include <iostream> 
#include <string> 

using namespace std  ;

class BankAccount
{
private:
    string name ;
    int age ;
    double  depositeAmt ;

public:
 BankAccount(string name , int age , double amt)
    {
        this->name = name ; 
        this->age = age ;
        this->depositeAmt = amt; 
    }
 

    
    double getdepositeAmt ()
    {
        return depositeAmt ; 
    }
    void setdepositeAmt(double amt)
    {
        depositeAmt = amt ; 
    }


    void withdraw(double & withdraw )
    {
    

        if (depositeAmt == (double) 0 )
        {
            cout << depositeAmt << " Empty Amount " << endl ; 
        } else if (depositeAmt < withdraw )
        {
            cout << " Your Reach limit of Withdraw Please add more Amount" ;
        }
        
        else {
            cout << " Balance Amt : " <<  depositeAmt - (double) withdraw  << endl ;  
        }

    }

};


int main ()
{
    
    string name , lastname;
    cout << "Enter Account Holder Name : " ;
    cin >> name  >> lastname ; 

    int age ; 
    cout << "Enter Account Holder Age : ";
    cin >> age;

    cout << "Enter Deposit amt : " ;
    double amt ; 
    cin >> amt ;

    double withdraw ;
    cout << "Enter Withdraw Amt : " ;
    cin >> withdraw ;


    BankAccount bank(name , age , amt);
    bank.getdepositeAmt();
    bank.withdraw(withdraw); 
    return 0 ;
}



