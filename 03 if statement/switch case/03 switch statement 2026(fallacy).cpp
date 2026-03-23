
#include <iostream>
using namespace std;
//switch statement
//switch statement is somewhat a replaacement for if else 
//however there are restrictions 
//advantages--1. easier to understand 2. could be faster??
int main()
{
    char level;
    cout<<"Whats Your Level: ";
    cin>>level;
    
    switch(level){
        case 'A': cout<<"Very Good";
        case 'B': cout<<"Good";break;
        case 'C': cout<<"study!";
        case 'D': cout<<"No turning off ppl's computer";
        default: cout<<"fail";break;
        
    }
    return 0;
}