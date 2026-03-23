//Today, 2 if else statement fallacy 
// nested if statement 

//1 if else fallacy

#include <iostream>
using namespace std;

int main(){
    int mark;
    cout<<"Enter the mark: ";
    cin>>mark;
    if (mark>=80 && mark<=100){
        cout<<"A"<<endl;
    }
    if (mark>=70 && mark<=79){
        cout<<"B"<<endl;
    }
    if (mark>=60 && mark<=69){
        cout<<"C"<<endl;
    }
    if (mark>=50 && mark<=59){
        cout<<"D"<<endl;
    }
    else{
        cout<<"Fail"<<endl;
    }
    
    
    
}