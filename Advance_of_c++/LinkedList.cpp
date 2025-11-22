#include <iostream> 

using namespace std ;

class Node
{
public:

    int value ;
    Node* next ;

    Node(int value ) : value(value) , next(nullptr) {};
};

class List {
    Node* head ;
    Node* tail ;

public: 
    List()
    {
        head = nullptr ;
        tail = nullptr;
    }

    
    void insertAtEnd(int val)
    {
        Node* newnode = new Node(val);
        
        if (head == nullptr)
        {
            head = tail =  newnode ;
        }
        
        else 
        {
            newnode->next = head ;
            head = newnode ;
        }
    }

    void insertAtTail(int val)
    {
        Node* newnode = new Node(val);
        if (head == nullptr)
        {
            head = tail =  newnode ;
        }
        
        tail->next = newnode ;
        tail = newnode ;
    }

    void deleteAtHead()
    {
        Node* temp = head ;
        if (temp == NULL)
        {
            cout << "List is Empty \n";
        }

        head = head->next ;
        temp->next = nullptr ;

        delete temp ;
        
    }

    void deleteAtTail()
    {
        Node* temp = head ;
        if (temp == NULL)
        {
            cout << "List is Empty \n" ;
        }

        while (temp->next != tail)
        {
            temp = temp->next ;
        }
        temp->next = nullptr;
        delete tail ;
        tail = temp ;
        
        
    }

    void printList()
    {
        Node* temp = head ;
        if (temp == nullptr)
        {
            cout << "List is Empty \n" ;
        }
        while (temp != nullptr)
        {
            cout << temp->value << " -> " ;
            temp = temp->next ;
        }
        cout << endl ;
    }

};




int main ()
{
    
    List list;
    list.insertAtEnd(12);
    list.insertAtEnd(10);
    list.insertAtEnd(4);
    list.insertAtTail(5);
    list.printList();
    list.deleteAtHead();
    list.printList();
    list.deleteAtTail();
    list.printList();


    return 0 ;
}