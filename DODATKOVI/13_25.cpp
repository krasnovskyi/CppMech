#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    string s,s1="",sd="",sm="",sy="";
    cin>>s;
    s1+=s[0];
    s1+=s[1];
    sd=s1;
    s1+='-';
    sm+=s[2]; sm+=s[3];
    s1+=sm;
    s1+='-';
    sy+=s[4]; sy+=s[5]; sy+=s[6]; sy+=s[7];
    s1+=sy;
    int d=stoi(sd), m=stoi(sm), y=stoi(sy);
    if ((m <= 0) || (m >= 13)) 
    {
        cerr << "Month is limited between 1 and 12, you entered: " << m << endl;
        #ifdef MYDEBUG
        system("pause");
        #endif
        return 0;
    }
    if ((d <= 0) || (d >= 32)) 
    {
        #ifdef MYDEBUG
        system("pause");
        #endif
        return 0;
    } 
    cout<<s1<<endl;
    #ifdef MYDEBUG
    system("pause");
    #endif
}