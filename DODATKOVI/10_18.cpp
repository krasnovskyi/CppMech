#include <iostream>
#include <cmath>
#define M_PI 3.14592653589793238462643382795
using namespace std;
 
struct decart 
{
    double x, y;
};
struct polar 
{
    double radius, degree;
};
struct dot
{
    decart dot1;
    polar dot2;
    int coord_type;//'1'=decart '2'=polar
};
decart CoordinatesConvertion(polar pol)
{
    decart dec;
    dec.x = pol.radius*cos(pol.degree);
    dec.y = pol.radius*sin(pol.degree);
    return dec;
}
void InputCoord(int tp, dot &d)
{
    if(tp==1)
    {
        double x,y;
        cin>>x>>y;
        d.dot1.x=x; d.dot1.y=y;
        d.coord_type=1;
    }
    else 
    {
        double x,y;
        cin>>x>>y;
        d.dot2.radius=x; d.dot2.degree=y;
        d.coord_type=0;
        d.dot1=CoordinatesConvertion(d.dot2);
    }
}
double Area(dot A, dot B, dot C)
{
    double x[]={A.dot1.x,B.dot1.x,C.dot1.x};
    double y[]={A.dot1.y,B.dot1.y,C.dot1.y};
    double ans=0.5*( (x[0]*(y[1]-y[2])) + (x[1]*(y[2]-y[0])) + (x[2]*(y[0]-y[1])) );
    return abs(ans);
}
void Print_DOT(dot K)
{
    cout<<"decart: "<<K.dot1.x<<" "<<K.dot1.y<<" and polar: "<<K.dot2.radius<<" "<<K.dot2.degree<<" and type: "<<K.coord_type<<endl;
}
int main()
{
    dot A,B,C;
    int tp;
    cin>>tp;
    InputCoord(tp,A);
    InputCoord(tp,B);
    InputCoord(tp,C);
    Print_DOT(A);
    Print_DOT(B);
    Print_DOT(C);
    cout<<Area(A,B,C)<<endl;
    #ifdef MYDEBUG
    system("pause");
    #endif
}