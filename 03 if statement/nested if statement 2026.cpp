

//nested if statement

#include <iostream>
using namespace std;

int main(){
    int number;
    string color;
    cout<<"Enter a positive integer number: ";
    cin>>number; //cin will skip the enter
    cout<<"Pick a color, red, blue, or white: ";
    //the way to save it is that
    cin.ignore(); //it will ignore one character-->in the case it happens to be \n
    //you must do this for numbers followed by string
    getline(cin, color); //collect the whole line as string input
    //getline will also skip enter
    
    if (color=="red"){
        if (number%2==0){
            cout<<"You picked the color red and even number"<<endl;
            cout<<"You must like stray kids"<<endl;
        }
        else{
            cout<<"You picked the color red and odd number"<<endl;
            cout<<"You must like EXO"<<endl;
        }
    }
    else if (color=="blue"){
        if (number%2==0){
            cout<<"You picked the color blue and even number"<<endl;
            cout<<"You must like Seventeen"<<endl;
        }
        else{
            cout<<"You picked the color blue and odd number"<<endl;
            cout<<"You must like BTS"<<endl;
        }
    }
    else{
        if (number%2==0){
            cout<<"You picked the color white and even number"<<endl;
            cout<<"You must like AESPA"<<endl;
        }
        else{
            cout<<"You picked the color blue and odd number"<<endl;
            cout<<"You must like NCT 127"<<endl;
        }
    }
    
    
    
}