//7
#include <iostream>
using namespace std;
int main(){
    int x=10, y=15, z=30, w=4;
    //compounded operator
    x+=10; //means x=x+(10)
    cout<<x<<endl;
    y-=10; //means y=y-(10);
    cout<<y<<endl;
    z*=3; //means z=z*(3);
    cout<<z<<endl;
    w/=5; //means w=w/(5);
    cout<<w<<endl; //dont' forget integer division!!
    
    //try this one 
    int a=4, b=8;
    a*=a+b; // means a=a*(a+b) * is the last thing to happen!
    cout<<a<<endl;
}