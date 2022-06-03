
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
int main()
{
    string a, b = "";
    double ans;
    getline(cin, a);
    for (int i = 0; i < a.size(); i++)
    {
        if (a[i] != ' ' && a[i] != '*')
        {
            b += a[i];
        }
    }
    ans = stod(b);
    cout << ans << endl;
#ifdef MYDEBUG
    system("pause");
#endif
}