#include <iostream> 

using namespace std ;

class DeQueue{

    int size ;
    int* array ;
    int front ;
    int reear ;

public : 
        
        DeQueue(int s){
            size = s ;
            array = new int [size];
            front = -1 ;
            reear = -1 ;
        }

        void insertAtFront(int val){
            if (front == (reear +1) % size)
            {
                cout << "Queue is Fulled \n";
                return ;
            }

            if (front == -1){
                front = reear = 0 ;
            }
            else {

                front = (front -1 + size) % size ;
            }

            cout << "Inserted From Front Val : " << val << " At Index " << front << endl ;

            array[front] = val ;            
        }

        void insertAtReear(int val){
            if (front == (reear +1) % size)
            {
                cout << "Queue is Fulled \n";
                return ;
            }

            if (front == -1){
                front = reear = 0 ;
            }
            else {
                reear = (reear + 1) % size ;
            }

            cout << "Inserted From Rear Val : " << val << " At Index " << reear << endl ;

            array[reear] = val ; 
        }

        void printQueue(){

            if (front == -1){
                cout << "Queue is Empty \n"  ;
                return ;
            }

           int i = front;
            while (true) {
            cout << array[i] << " ";
            if (i == reear) break;
            i = (i + 1) % size;
            }

            cout << endl ;
            
        }


        void deleteFromFront(){
            if (front == -1){
                cout << "Queue is Empty \n";
                return ;
            }

            if (front == reear){
                front = reear = -1 ;
            } else {
                front = (front +1)%size ;
            }       
            
        }

        void deleteFromRear(){
            if (front == -1){
                cout << "Queue is Empty \n" ;
                return ;
            }

            if (front == reear){
                front = reear = -1 ;
            } else {
                reear = (reear -1 +size) %size ;
            }
            
            
        }
};

int main (){

    int size = 5 ;
    
    DeQueue dq(size) ;
    dq.insertAtFront(15);
    dq.insertAtReear(11);
    dq.insertAtFront(20);
    dq.insertAtReear(25);
    dq.insertAtFront(21);
    dq.deleteFromFront();
    dq.deleteFromRear();

    dq.printQueue();
    dq.deleteFromRear();
    dq.printQueue();
    

    return 0 ;

}