#include <iostream>
#include <string> 

using std ::string ;

class Students {


private :
        string name ;
        int age ;
        int roll_no ;
        int marks ;

public :

    Students(string name , int age , int rollno , int marks)
    {
        this->name = name ;
        this->age = age ;
        this->roll_no = rollno ;
        this->marks = marks;
    }

    void displayStudentDetails()
    {
        std ::cout << "-- Printing Student Detail's -- \n" ;
        std ::cout << "Student Name : " << this->name << std::endl ;
        std ::cout << "Student Age : " << this->age << "\n" ;
        std ::cout << "Student Roll NO. : " << this->roll_no << std ::endl ;
        std ::cout << "Student Marks : " << this->marks << std ::endl ;
    }
};

int main ()
{
    string name ;
    std ::cout << "Enter Your Name : " ;
    std ::cin >> name ;

    int age ;
    std ::cout << "Enter Your Age : " ;
    std ::cin >> age ;

    int mark = 450 ;
    int rollno = 525 ;
    Students student(name , age , rollno , mark);
    student.displayStudentDetails();
    return 0 ;
}