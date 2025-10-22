    #include <iostream>
    #include <string>

    using namespace std ;

    class Min_Max_find {

        private :
            int size ;
        public : 
            Min_Max_find(int size) : size (size) {}


            int findmin(int size , int numbers[])
        {
            int min = numbers[0];
            for (int i = 0; i < size; i++)
            {
                if (numbers[i] < min) min = numbers[i] ;      
            }
        
            return min ;    
        }
        
        int findmax(int size , int numbers[])
        {
            int max = numbers[0];
            for (int i = 0; i < size; i++)
            {
                if (numbers[i] > max) max = numbers[i] ;
            }
            
            return max ; 
        }


            ~Min_Max_find()
            {
                cout << " Distructore Called \n" ;
            }
    };

    int main ()
    {
        int size = 5 ;
        int number[size] = {15, 7, 22, 9, 31};

        Min_Max_find find(size);
        int max = find.findmax(size , number);
        int min = find.findmin(size , number);
        cout << max << " : max value \n";
        cout << min << " : min value \n";


        return 0 ;

    }