#include <iostream> 
#include <string>

using namespace std ;


class Array {

    int size ;
    int* array ;

    public : 

    Array(int size ) : size(size) {}

    int* createArray(int size)
    {
        array = new int[size] ;
        cout << "Ënter the Element in Array \n";
        for (int i = 0; i < size; i++)
        {
            cin >> array[i] ;
        }

        return array ;
        
    }

    void printArray(  )
    {
        cout << "[" ;
        for (int i = 0; i < size - 1 ; i++)
        {
            if (array[i] >= -1 )
            {
                cout << array[i] << "," ;  
            }
                      
        }
        cout << "]" ;
        cout << "\n" ;
        
    }

    void insertAtFirst(int incindex , int value )
    {
        for (int i = size; i > 0; i--)  array[i] = array[i-1] ;
        size += incindex ;
        array[0] = value ;
        
    }
    void insertAtLast( int value )
    {
        size ++ ;
        array[size -1] = value ;
        size ++ ;
    }

    void insertAtMid(int position , int value)
    {
        for (int i = size; i > position ; i--)
        {
            array[i] = array[i-1];
        }
        array[position] = value ;
        size++;
    }

    void deleteByValue(int target)
    {
        for (int i = 0; i < size-1; i++)
        {
            if (array[i] == target)
            {
                array[i] = array[i+1];
            }
            
        }

        size -- ;
        
    }

    void deleteAtLast()
    {
        size -- ;
    }

    void deleteAtFirst()
    {
        for (int i = 0; i < size-1; i++)
        {
            array[i] = array[i+1];
        }
        size -- ;       
    }

    void deleteAtMid(int position )
    {
        for (int i = position; i < size-1; i++)
        {
            array[i] = array[i+1];
        }
        size -- ;
        
    }

    void capacity()
    {
        cout << size  << "\n";
    }

    int findMaxElement()
    {
        int max = array[0];
        for (int i = 0; i < size -1; i++)
        {
            if (array[i] > max) max = array[i] ;
            
        }
        return max ;
        
    }

    ~Array(){

        delete array ;
        cout << "\n" ;
        cout << "Distructore Called " ;
    }
};



int main ()
{
    cout << "Enter the size " ;
    int size  ;
    cin >> size ;
    Array arr(size) ;
    int* newarr = arr.createArray(size);
    arr.printArray();
    arr.insertAtFirst(1 , 0);
    cout << "Add in First 0 \n";
    arr.printArray() ;
    arr.insertAtLast(5);
    cout << "Add in Last 0 \n";
    arr.printArray();
    arr.capacity();
    int indexupdate ;
    cout << "Enter the index of Space: ";
    cin >> indexupdate ;
    int element ;
    cout << "Enter the element: ";
    cin >> element ;
    arr.insertAtMid(indexupdate , element);
    arr.printArray();
    int max = arr.findMaxElement();
    cout << "Max Number : " << max << endl ;
    cout << "Delete Form last index \n" ;
    arr.deleteAtLast();
    arr.printArray();
    cout << "Delete Form first index \n" ;
    arr.deleteAtFirst();
    arr.printArray();
    cout << "Delete From Mid index \n";
    arr.deleteAtMid(indexupdate);
    arr.printArray();
    cout << "Enter the Element want Delete : " ;
    int target ;
    cin >> target ;
    arr.deleteByValue(target);
    arr.printArray();

    return 0 ;
}