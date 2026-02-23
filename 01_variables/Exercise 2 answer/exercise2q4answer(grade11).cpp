//4.
#include <iostream>
using namespace std;
int main(){
    //assignment symbol is = , it assigns value from right to left
    int x;
    x=6; //assign value 6 to the variable x 
    //since it assigns value from right to left, you cannot do 
    //6=x; this would be wrong 
    //assignment symbol can be used with math operator 
    //math operator: + - *(multiplication) /(division) %(remainder)
    //for example
    x=x+11; //it will do 6 + 11, then assign to x
    //assign is the last action to happen
    cout<<x; //so the value will be 17
}