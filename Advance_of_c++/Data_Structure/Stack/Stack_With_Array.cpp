#include <iostream> 

using namespace std ;

class Stack{

    int size ;
    int * array ;
    int top ;

public : 
        Stack(int s){
            size = s ;
            array = new int[size];
            top = -1 ;
        }

        void push(int val){
            if (top == size -1){
                cout << "Stack is OverFlow \n";
                return ;
            }

            top++ ;
            array[top] = val ;
            cout << "Push Value is  : " << val << endl ;
        }

        void pop(){
            if (top == -1){
                cout << "Stack is Empty \n ";
                return ;
            }
            cout << "Pop Value : " << array[top] << endl ;
            top-- ;
        }

        int peek(){
            if (top == -1){
                cout << "Stack is Empty \n ";
                return -1 ;
            }

            return array[top];
        }
};

int main(){

    int size = 5 ;
    Stack stack(size) ;
    stack.push(15);
    stack.push(16);
    stack.pop();
    int resutl = stack.peek();
    cout << resutl << endl ;

    return 0 ;
}