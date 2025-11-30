#include <iostream> 

using namespace std ;

class Node {

public :
        int data ;
        Node* next ;

        Node(int val ) : data(val) , next(nullptr) {}

};

class List{

    Node* head ;
    Node* tail ;
public : 
        List(){
            head = nullptr ;
            tail = nullptr ;
        }

        void headinsert(int val ){
            Node* newnode = new Node(val);
            if(head == NULL){
                head = tail = newnode ;
                return ;
            }
        }

        void insertAtHead(int val ){

            
            if(head == NULL){
                headinsert(val) ;
                return ;
            }

            Node* newnode = new Node(val);

            newnode->next = head ;
            head = newnode ;
        }

        

        int sizeOfList(){
            
            if(head ==  NULL){
                cout << "List is empty \n";
                return 0 ;
            }

            int count = 0 ;
            Node* temp = head ;
            while (temp != NULL)
            {
                temp = temp->next ;
                count ++ ;
            }
            return count ;
            
        }

        void insertAtMid(int index , int val )
        {
            int size = sizeOfList() ;
            if (index > size || index < 0 )
            {
                cout << "index is invalid \n" ;
                return ;
            }

            if (index == 0 || head == NULL)
            {
                headinsert(val);
                return ;
            }

            Node* newnode = new Node(val);
            Node* temp = head ;
            for (int i = 0; i < index -1; i++)
            {
                temp = temp->next ;
            }
            
            newnode->next = temp->next ;
            temp->next = newnode ;         

            if (temp == tail)
            {
                tail = newnode ;
                return ;
            }
            
        }

        void insertAtTail(int val)
        {
            if (head == NULL)
            {
                headinsert(val);
                return ; 
            }
            Node* newnode = new Node(val);

            tail->next = newnode ;
            tail = newnode ;
            return ;
        }

        void printList(){
            if (head == NULL)
            {
                cout << "Lis is empty \n";
                return ;
            }

            Node* temp = head ;
            while (temp != NULL)
            {
                cout << temp->data << " -> " ;
                temp = temp->next ;
            }
            cout << endl ;          
            
        }

        void deleteFromHead(){
            if (head == NULL)
            {
                cout << "List is empty \n";
                return ;
            }

            Node* temp = head; 
            head = head->next ;
            if (head == NULL)
            {
                tail = NULL ;
            }

            delete temp ;           
            
        }

        void deleteFromMid(int index )
        {
            if(head == NULL){
                cout << "List is empty \n";
            }

            int size = sizeOfList(); 
            if (index == size || index < 0)
            {
                cout << "Invalid index \n";
                return ;
            }

            if (index == 0)
            {
                Node* temp = head ;
                head = head->next ;
                if (head == NULL)
                {
                    tail = NULL ;
                }
                delete temp ;    
            }

            Node* pre = NULL ;
            Node* temp = head ;
            for (int i = 0; i < index ; i++)
            {
                pre = temp ;
                temp = temp->next ;
            }

            pre->next = temp->next ;

            if (temp == tail)
            {
                tail = pre ;
            }

            delete temp ;         
        }
};

int main (){

    List list ;
    list.insertAtHead(15);
    list.insertAtHead(11);
    list.insertAtTail(16);
    list.insertAtTail(18);
    list.insertAtTail(20);
    list.insertAtMid(3 , 14);
    cout << list.sizeOfList() << endl;
    list.printList();
    list.deleteFromHead();
    list.printList();

    cout << "Dete From Mid : \n" ;
    list.deleteFromMid(4);
    list.printList();
    list.insertAtTail(22);
    list.printList();
    return 0 ; 
}