
#include <iostream>
using namespace std;
int main()
{
    string color;
    cout<<"Please enter your favourite color, red, blue, or dirt yellow: ";
    //cin will not collect space, nor enter 
    getline(cin, color); //it will collect the whole line
    
    if (color=="red"){
        cout<<"You are full of energy"<<endl;
      
    }
    else if (color=="blue"){
        cout<<"You are calm"<<endl;
    }
    else{
        cout<<"only few nobles will choose this color!!"<<endl;
    }
    return 0;
}