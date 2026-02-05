#include <iostream>

using namespace std ;

const int sizeofStudent = 20 ;

class StudentGrades{

    char studentGrades[sizeofStudent];
    int attendease ;
    
    bool sizeOfStudentMax(){
        if (attendease >= sizeofStudent ){
            cout << "Seat's are Fulled \n";
            return true ;
        }
        return false ;
        
    }

    bool sizeofStudentMin(){
        if (attendease == -1){
            cout << "Seat's are Empty \n";
            return true ;
        }
        return false ;
        
    }
    
public :


        StudentGrades(): attendease(0) {};

        void insertGrade(char grade){
            if (sizeOfStudentMax) return ;
            
            studentGrades[attendease] = grade ;
            attendease++ ;
        }

        void insert 
    
};

int main(){

    return 0 ;
}