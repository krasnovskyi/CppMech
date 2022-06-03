#include <iostream>
#include <math.h>
 
using namespace std;
 
const double g = 6.61 * pow(10, -11);
 
int main()
{
  double m1,m2,r;
 
  cout << "введіть масу тіл і радіус" << endl;
  cin >> m1 >> m2 >> r;
  
  cout << "F = " << g * m1 * m2 / (r * r);
 
  return 0;
}