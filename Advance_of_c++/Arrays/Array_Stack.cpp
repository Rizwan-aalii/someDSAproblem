#include <iostream> 

using namespace std ;

class Stack {
    int size ;
    int *array ;
    int top ;

public :

        Stack(int s){
            size = s ;
            array = new int[size];
            top = -1 ;
        }
        void push(int val){
            
            if(top == size-1 ){
                cout << "Stack is OverFlow \n";
                return ;
            }
            array[++top] = val;
        }

        void pop(){

            if (top == -1){
                cout << "Stack is Empty \n";
                return ;
            }

            top-- ;
        }

         int peek() {
        if (top == -1) {
            cout << "Stack Empty\n";
            return -1;
        }

        else if (top == size){
            cout << "Stack Full Not more space \n";
            return -1 ;
        }
        return array[top];
       
        
         }

        bool isEmpty(){
            if (top == -1){
                cout << "Stack is Empty \n";
                return 1 ;
            } else {

                cout << "Stack Current Size " << size - top <<endl ;
                return 0 ;
            }
        }

        bool isFull(){
            if (top == size -1){
                cout << "Stack is Full " << top << endl ;
                return 1 ;
            } else {
                cout << "Stack Current Size " << size - top <<endl ;
                return 0 ;
            }
            
        }
};

int main (){

    int size = 5 ;
    Stack stack(size);
    stack.push(12);
    stack.push(13);
    stack.push(15);
    stack.push(20);
    stack.push(25);
    // stack.push(30);
    int data = stack.peek() ;
    cout << data << endl;
    // stack.isEmpty();
    stack.isFull();
    return 0 ;
}