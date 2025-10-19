#include <iostream>
#include <string>  
using namespace std ;

class Student {

    public : 
    string name ;
    int marks ;

    void showResult()
    {
        if (marks > 100)
        {
            cout << "Please Enter valid marks " << marks << endl ; 
        } else {
            if (marks > 45 && marks < 100 )
            {
                cout << name << " Student has pass with Marks : " << marks << endl ; 
            }
            else {
                cout << name << " Student has Failed with Marks : " << marks << endl ; 
            }

        }
        
        
    }
};

int main() 
{

    string stdname ;
    cout << "Enter Your name : " ;
    getline(cin , stdname);

    int stdmark ; 
    cout << "Enter Your mark : " ;
    cin >> stdmark ;

    Student student ;
    student.name = stdname ;
    student.marks = stdmark ; 
    student.showResult();



    return 0 ; 
}