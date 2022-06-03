#include <iostream>
#include <string>
 
using namespace std;
 
int Date( int D, int M, int Y )
{
    int a, y, m, R;
    a = ( 14 - M ) / 12;
    y = Y - a;
    m = M + 12 * a - 2;
    R = 7000 + ( D + y + y / 4 - y / 100 + y / 400 + (31 * m) / 12 );
    return R % 7;
}


int main()
{
    int D, M, Y, d;
    char C;
    string S[7] = { "нд", "пн", "вт", "ср", "чт", "пт", "сб" };
    cin >> D >> M >> Y;
     
    d = D - 1;
    cout <<"Вчорашній день:" << " " << d << " "<< M << " "<< Y << endl;
    
    cout << S[ Date( D, M, Y ) ] << endl;
    
    return 0;
}