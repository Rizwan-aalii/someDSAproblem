    #include <iostream>
    #include <string>


    using namespace std ;



class Array
{
    string* number;
    int size;       // current used size
    int capacity;   // total allocated size

public:

    Array(int cap) : capacity(cap), size(0)
    {
        number = new string[capacity];
    }

    void createArray()
    {
        cout << "Enter " << capacity << " elements:\n";
        for (int i = 0; i < capacity; i++)
        {
            cin >> number[i];
        }
        int newcap = capacity -1 ;
        size = capacity;      // now array is full
    }

    void insertAtFirst(const string& value)
    {
        // prevent overflow
        if (size == capacity)
        {
            cout << "Overflow: no space to insert\n";
            return;
        }

        // shift elements
        for (int i = size; i > 0; i--)
        {
            number[i] = number[i - 1];
        }

        number[0] = value;
        size++;
    }

    void printArray() const
    {
        if (size == 0)
        {
            cout << "Array is empty\n";
            return;
        }

        for (int i = 0; i < size; i++)
        {
            cout << number[i] << " ";
        }
        cout << endl;
    }

    ~Array()
    {
        delete[] number;
    }
};





        



    int main ()
    {
        
        string name = "rizzu" ;
        int size ;
        cout << "Enter the size : " ;
        cin >> size ;
        Array array(size);
        array.createArray();
        array.insertAtFirst("name");
        array.printArray();
        
    }

        
