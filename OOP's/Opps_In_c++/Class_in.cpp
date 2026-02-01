#include <iostream> 
#include <string>

using std:: string ;

class Student {

private :
        string name ;
        int age ;
        int roll_no ;
        int marks ;

public :

    string getName()
    {
        return name ;
    }
    void setName(string name)
    {
        this->name = name ;
    }

    int getAge()
    {
        return age ;
    }
    void setAge(int age)
    {
        this->age = age ;
    }

    int getRoll_No()
    {
        return roll_no ;
    }
    void setRoll_No(int rollno)
    {
        this->roll_no = rollno ;
    }

    int getMarks()
    {
        return marks ;
    }
    void setMarks(int mark)
    {
        marks = mark ;
    }

    void displayStudentDetails()
    {
        std ::cout << "-- Printing Student Detail's -- \n" ;
        std ::cout << "Student Name : " << getName() << std::endl ;
        std ::cout << "Student Age : " << getAge() << "\n" ;
        std ::cout << "Student Roll NO. : " << getRoll_No() << std ::endl ;
        std ::cout << "Student Marks : " << getMarks() << std ::endl ;
    }



};

int main()
{
    string name ;
    std ::cout << "Enter Your Name : " ;
    std ::cin >> name ;

    int age ;
    std ::cout << "Enter Your Age : " ;
    std ::cin >> age ;

    int marks = 450 ;
    int rollno = 525 ;

    Student student ;
    student.setAge(age);
    student.setName(name);
    student.setMarks(marks);
    student.setRoll_No(rollno);
    student.displayStudentDetails();


    return 0 ;

}