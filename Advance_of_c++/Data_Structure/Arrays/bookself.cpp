#include <iostream>
#include <string>


using namespace std ;
const int sizeofSelf = 5 ;
string empty = "Empty";

class BookStore{


    string bookSelf[sizeofSelf] ;
    int entry ;

    void checkForSizeGreator(){
        if(entry >= sizeofSelf){
            cout << "Self is Fulled \n";
            return ;
        }
    }

    void checkForSizeLess(){
        if(sizeofSelf == -1){
            cout << "Self is Empty \n";
            return ;
        }
    }

    void checkforIndex( int index){
        if (index > entry){
                cout << "Invalid Index \n";
                return ;
            }
    }

public :

        BookStore() : entry(0) {}

        void insertBook(string book){
            checkForSizeGreator();

            bookSelf[entry] = book;
            entry++ ;
        }

        void displayBookSelf(){
            checkForSizeLess();

            for (int i = 0; i < sizeofSelf; i++){
                cout << bookSelf[i] << " " ;
            }
            cout << endl ;

        }

        void updateBook(int index , string book){
            checkForSizeLess();
            checkforIndex(index);
                        
            bookSelf[index] = book ;
        }

        void removeBookFromSelf(int index){
            checkForSizeLess();
            checkforIndex(index);
           
            for (int i = index; i < entry-1; i++){
                bookSelf[i] = bookSelf[i+1];
            }
            bookSelf[entry-1] = empty ;
            
        }
        
        void printSizeOfArray(){
            checkForSizeLess();
            
        }
};


int main(){
    int size = 4 ;
    string csBooks[size] = {"Java" , "DSA" , "C++" , "System Desing"};
    
    BookStore books;
    books.insertBook("hello");

    for (int i = 0; i < size; i++){
        books.insertBook(csBooks[i]) ;
    }
    
    books.displayBookSelf();
    books.removeBookFromSelf(0);
    books.displayBookSelf();
    books.updateBook(4,"Python");
    books.displayBookSelf();
    return 0 ;
}