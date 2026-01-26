#include <iostream> 

using namespace std; 

int addNum(int val , int end){
    if ( val > end ) return 0 ;
    cout << val << " ";
    addNum(val+1 , end);

    
}

int main(){

    addNum(1 , 5);
    return 0 ;
}