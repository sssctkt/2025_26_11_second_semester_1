
#include <iostream>
using namespace std;
int main()
{
    //math operators +,-,*,/  
    //compounded operator
    int x=5, y=11, z=7, w=10, a=2, b=4;
    x+=4;//same as x=x+(4);
    cout<<x<<endl;
    y-=20; //same as y=y-(20);
    cout<<y<<endl;
    z*=3;  //same as z=z*(3);
    cout<<z<<endl;
    w/=4.0; //same as w=w/(4); //(w is an integer)
    cout<<w<<endl;
    a*=a+b; //a=a*(a+b)
    cout<<a<<endl;
    
    return 0;
}