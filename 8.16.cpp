#include <iostream>
#include <cstdlib>
#include <ctime>
 
int main()
{
    const int N = 10;
    int matrix[N][N];
    int n;
    do
    {
        std::cout << "Enter the size of the matrix (no more than 10): ";
        std::cin >> n;
    } while (n > 10);
    srand(time(NULL));
    
    for (int i = 0; i < n; ++i)
    
        for (int j = 0; j < n; ++j)
            matrix[i][j] = rand() % 89 + 10; 
            
    for (int i = 0; i < n; ++i)
    {   
        for (int j = 0; j < n; ++j)
            std::cout << matrix[i][j] << ' ';
        std::cout << std::endl;
    }
    
    for (int i = 0, k = n-1; i < n; ++i, --k)
    
        for (int j = 0, l = n-1; l > i; ++j, --l)
        {
            int buf = matrix[j][i];
            matrix[j][i] = matrix[k][l];
            matrix[k][l] = buf;
        }
    std::cout << std::endl;
    
    for (int i = 0; i < n; ++i)
    {   
        for (int j = 0; j < n; ++j)
            std::cout << matrix[i][j] << ' ';
        std::cout << std::endl;
    }
    return 0;
}
