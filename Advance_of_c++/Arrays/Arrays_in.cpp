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
        if (target == array[i] && 0 == i )
        {
            array[i] = array[i+1];
            for (int j = i; j < size -1 ; j++)
            {
                array[j] = array[j+1];
            }
            
        }
           if (array[i] == target)
            {
                array[i] = array[i + 1];
            }
           
            
        }

        size -- ;
        
    }

    int rotateArrayByLeft(int index) // how much index to rotate 
    {

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
    
    int findSecondMaxElement()
    {
        sortingArray();
        int max = array[size - 2];
        return max ;
    }

    int findMinElement()
    {
        int min = array[0] ;
        for (int  i = 0; i < size -1 ; i++)
        {
            if (array[i]  < min) min = array[i] ;
            
        }
        return min ;
        
    }

    void sortingArray()
    {
        for (int i = 0; i < size - 1 ; i++)
        {
            for (int j = 0; j < size - i - 1; j++)
            {
                if (array[j] > array[j+1] )
                {
                    int temp = array[j];
                    array[j] = array[j+1];
                    array[j+1] = temp ;
                }
                
            }
            
        }
        
    }

    int checkEvenOrOdd()
    {
        int freq ;
        for (int  i = 0; i < size-1 ; i++)
        {
            if (array[i] % 2 == 0)
            {
                cout << array[i] << " " ;
                freq ++ ;
            }
            
        }
        cout << endl;
        if (freq == 0)
        {
            cout << "All Elements are not Even \n" ;
        }
        
    }

    int sumOfArray()
    {
        int sum = 0;
        for (int  i = 0; i < size-1; i++)
        {
            sum += array[i];
        }
        return sum ; 
        
    }

    int averageOfArray()
    {
        int sum = sumOfArray();
        int average = sum / size ;  

        return average ;
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
    arr.checkEvenOrOdd();
    cout << "Add in Last 0 \n";
    arr.printArray();
    arr.capacity();
    int sum = arr.sumOfArray();
    cout << "sum of array : " << sum << "\n";
    int ave = arr.averageOfArray();
    cout << "average of array : " << ave << "\n" ;
    int indexupdate ;
    cout << "Enter the index of Space: ";
    cin >> indexupdate ;
    int element ;
    cout << "Enter the element: ";
    cin >> element ;
    arr.insertAtMid(indexupdate , element);
    arr.printArray();
    arr.sortingArray();
    // int max = arr.findMaxElement();
    // cout << "largest Elemtn : " << max << endl ;
    // arr.printArray();
    int secondmax = arr.findSecondMaxElement();
    cout << "second largest Element " << secondmax << endl ;

    return 0 ;
}