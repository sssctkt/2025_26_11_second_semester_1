
#include <iostream>
using namespace std;
//switch statement
//switch statement is somewhat a replaacement for if else 
//however there are restrictions 
//advantages--1. easier to understand 2. could be faster??
int main()
{
    //switch statement only replaces ==, not >, not <, not <=, not >= 
    //only works with int and char
    int level;
    cout<<"Enter your level: ";
    cin>>level;
    switch(level){
        case 4: cout<<"very good!"<<endl; break;
        case 3: cout<<"ok"<<endl; break;
        case 2: cout<<"continue to study hard"<<endl; break;
        case 1: cout<<"ask teachers more question"<<endl; break;
        default: cout<<"fail"<<endl;break;
    }

    return 0;
}