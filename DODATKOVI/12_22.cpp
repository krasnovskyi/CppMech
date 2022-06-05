#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
 
int main()
{
    unsigned int i, v[100000];
    v[0] = 0;
    v[1] = 1;
    for(i=2;i<100000;i++)
    {
        if (i%2==0) 
            v[i] = v[i/2];
        else 
            v[i] = v[(i-1)/2] + v[(i-1)/2+1];
    }
    unsigned int n;
    while(cin >> n)
    {
        if(n!=0) 
            cout << *max_element(v, v+n+1) << endl;
    }
    #ifdef MYDEBUG
    system("pause");
    #endif
}