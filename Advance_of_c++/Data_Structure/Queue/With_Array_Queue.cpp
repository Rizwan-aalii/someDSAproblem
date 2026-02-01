#include <iostream>

using namespace std ;

#include <iostream>
using namespace std;

class Queue{
    int size ;
    int* array ;
    int front ;
    int reear ;

public : 
        Queue(int s){
            size = s ;
            array = new int[size];
            front = -1 ;
            reear = -1 ;
        }

        void enqueue(int val){
            if (reear == size-1){
                cout << "Queue is Fulled \n";
                return ;
            }

            if (front = -1 ){
                front = 0 ;
            }

            reear++ ;
            array[reear] = val ;
            cout << "Value inserted : " <<  val << endl ;
        }

        void dequeue(){
            if (front == -1){
                cout << "Queue is Empty \n";
                return ;
            }

            cout << " DeQueue Value : " << array[front] << endl ;

            front++ ;

            if (front > reear ){
                front = reear = -1 ;
                return ;
            }
        }

        int getFront(){
            if (front == -1){
                cout << "Queue is Empty \n";
                return -1 ;
            }

            return array[front];
        }
};


int main(){

    int size = 4 ;
    Queue queue(size) ;
    queue.enqueue(12);
    queue.enqueue(15);
    queue.dequeue();
    int result = queue.getFront();
    cout << result << endl ;
    
    return 0 ;
}