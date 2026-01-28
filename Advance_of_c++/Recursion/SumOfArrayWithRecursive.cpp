#include <iostream> 

using namespace std ;

int sumOfArray(int size, int arr[]) {
    if (size == 0)
        return 0;

    return arr[size - 1] + sumOfArray(size - 1, arr);
}


int main() {
    int size = 5;
    int array[size] = {5,3,2,4,1};

    int total = sumOfArray(size, array);
    cout << total;

    return 0;
}
