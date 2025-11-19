#include <iostream>
#include <string>

using namespace std ;

struct Node
{
    int data ;
    Node* next ;

    Node(int data)
    {
        this->data = data ;
        this->next = nullptr ;
    }

    void InsertAtHead (Node* &head ,int value)
    {
        Node newnode = new Node(value)


    }
    
    ~Node() {
        delete next ;
        cout << "List called and distruct\n " ;
    }

   
};
 

int main ()
{

    int value = 15 ;

    Node list(value) ;
    cout << list.data << endl ;
    return 0 ;
}