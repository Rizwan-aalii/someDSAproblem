#include <iostream>
#include <string>

using std :: string ;

int main ()
{
    int row ;
    int colum ;
    std :: cout << "Enter Row Size : " ; 
    std :: cin >> row ;
    std :: cout << "Enter Colum Size : " ;
    std :: cin >> colum ;
    
    int matrix [row] [colum] ;
    for (int i = 0; i < row ; i++)
    {
            for (int j = 0; j < colum ; j++)
            {
                std :: cin >> matrix [i][j] ;
            }
            
    }

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < colum; j++)
        {
            std :: cout << matrix [i][j] << " " ;
        }
        std :: cout << "\n" ;
    }

    // std :: cout << "-- sothing diffrence output \n" ;

    // for (int i = 0; i < row; i++)
    // {
    //     for (int j = 0; j < colum; j++)
    //     {
    //         std :: cout << matrix [j][i] << " " ;
    //     }
    //     std :: cout << "\n" ;
    // }
    
        std :: cout << "print the sum of array row \n" ;
    int sumof_row = matrix[0][0] ;
    int sumof_colum = matrix[0][0] ;

    for (int i = 0; i < row; )
    {
        for (int j = 1; j < colum ; j++)
        {
            sumof_row += matrix[i][j] ;
        }
        
        std :: cout << sumof_row ;
        std :: cout << "\n" ;
        sumof_row = matrix[i+1][0];
    }

        std :: cout << "print the sum of array colum \n" ;


     for (int i = 0; i < colum ; )
    {
        for (int j = 1 ; j < row ; j++)
        {
            sumof_colum += matrix[j][i] ;
        }
        
        std :: cout << sumof_colum ;
        std :: cout << "\n" ;
        sumof_colum = matrix[i++][0];
    }

    

    
    

    return 0 ;
    

    
}