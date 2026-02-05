#include <iostream>
#include <string>


using namespace std ;
const int sizeofSelf = 5 ; // we size as const it need 
string empty = "Empty";

class BookStock{


    string bookSelf[sizeofSelf] ;
    int entry ;

    bool checkForSizeGreator(){
        if(entry >= sizeofSelf ){
            cout << "Size is Fulled \n";
            return true ;
        }
        return false ;
    }

    bool checkForSizeLess(){
        if(sizeofSelf == -1){
            cout << "Self is Empty \n";
            return true ;  // this will help to check condition farely
        }
        return false ;   // this will help to check condition farely 
    }

    bool checkforIndex( int index){
        if (index > entry){
                cout << "Invalid Index \n";
                return true ;
            }
            return false ;
    }

public :

        BookStock() : entry(0) {}

        void insertBook(string book){
            if (checkForSizeGreator()) return ; // this will actual stop based on this condition 
            

            bookSelf[entry] = book;
            entry++ ;
        }

        void displayBookSelf(){
            if (checkForSizeLess()) return ;
            

            for (int i = 0; i < sizeofSelf; i++){
                cout << bookSelf[i] << " " ;
            }
            cout << endl ;

        }

        void searchBook(string book){
            if (checkForSizeLess()) return ;
            

            bool found = false ;

            for (int i = 0; i < entry; i++){
                if (book == bookSelf[i]){
                    cout << "Book At Index : " << i << endl;
                    found = true ;
                }              
            }

            if (found != true){
                cout << "Book is Not in Stock \n";
                return ;
            }
            
            
        }

        void updateBook(int index , string book){
            if (checkForSizeLess()) return ;
            
            checkforIndex(index);
                        
            bookSelf[index] = book ;
        }

        void removeBookFromSelf(int index){
            if (checkForSizeLess()) return ;
            
            if(checkforIndex(index)) return;
           
            for (int i = index; i < entry-1; i++){
                bookSelf[i] = bookSelf[i+1];
            }
            bookSelf[entry-1] = empty ;
            entry--;
            
        }
        
        void printSizeOfArray(){
            if (checkForSizeLess()) return ;

            cout << entry <<" \n";
        }
};


int main(){
    int size = 4 ;
    
    string goodcs = "Java" ;
    BookStock books;
    books.insertBook("DSA");
    books.insertBook("Java");
    books.insertBook(goodcs);
    books.insertBook("C++");
    books.insertBook("Python");
    books.displayBookSelf();
    books.printSizeOfArray();
    books.updateBook(2 , "JavaScript");
    books.insertBook("AI | ML");
    books.displayBookSelf();
    books.searchBook(goodcs);
    
    return 0 ;
}