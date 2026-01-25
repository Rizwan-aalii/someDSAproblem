#include <iostream>

using namespace std ;

class Node{

    public:
    int data ;
    Node* next ;

    Node(int val){
        data = val; 
        next = nullptr ;
    }
};

class LinkList{

    Node* head ;
    Node* tail ;

public :

        LinkList():head(nullptr) , tail(nullptr) {};

        void createList(int val){
            Node* newnode = new Node(val);

            if (head == NULL){
                head = tail = newnode;
                return ;
            }

            newnode->next = head ;
            head = newnode ;
        }

        void printList(){
            Node* temp = head ;

             if (head == NULL){
                cout << "List is Emtpy \n";
                return ;
            }

            while (temp != NULL){
                cout << temp->data << " --> " ;
                temp = temp->next ;
            }
            cout << endl ;
        }

        void reverseList(){

            Node* temp = head ;
            Node* next = head->next ;

             if (head == NULL){
                cout << "List is Emtpy \n";
                return ;
            }

            while (temp != NULL){
                temp->next = nullptr ;
                
            }
            
            
        }
};

int main(){

    int data = 12 ;
    LinkList list ;
    list.createList(data);
    list.createList(13);
    list.createList(14);
    list.printList();
    return 0 ;
}