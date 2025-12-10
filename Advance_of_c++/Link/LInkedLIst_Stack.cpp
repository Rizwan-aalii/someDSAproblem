#include <iostream> 

using namespace std ;

class Node {
    
public : 
        int data ;
        Node* next ;
};

class Stack {
    Node* head ;

public :

    Stack(): head(nullptr) {};

    void push(int val ){
        Node* temp = new Node();
        temp->data = val;
        temp->next = head ;
        head = temp ;
    }

    void pop(){
        if (head == NULL){
            cout << "Stack is Empty \n";
            return ;
        }

        Node* temp = head ;
        head = head->next ;
        delete temp ;
        
    }

    int peek(){
        if (head == NULL){
            cout << "Stack is Empty \n";
            return -1 ;
        }

       return head->data ;
    }
};

int main(){

    Stack stack;
    stack.push(12);
    stack.push(13);
    stack.push(20);
    stack.pop();
    stack.pop();
    int val = stack.peek();
    cout << val << endl  ;
    return 0 ;
}