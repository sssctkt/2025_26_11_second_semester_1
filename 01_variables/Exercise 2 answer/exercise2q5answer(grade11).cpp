//5
#include <iostream>
using namespace std;
int main(){
    int x=3, y=5;
    float answer;
    //integer division: when both number are integers, division between them 
    //means answer will have no decimals;
    answer=x/y;
    cout<<answer<<endl; //0
    //to counter that, you have to make 1 of the number to be decimal
    answer=1.0*x/y;
    cout<<answer;
}