
#include <iostream>
using namespace std;
int main()
{
    //things you cannot do when creating a variable
    int tomHeight; //cannot be separated by space
    int x321; //cannot start with numbers
    //int #$@@; //cannot use symbol (except _)
    //int cout{3}; do not use keyword as your variable name
    
    //task:
    //1. declare 3 integer variable in one line 
    //2. In one line, declare two double varialbe and initialize one 
    //double variable and set the value as 4.5 
    //3. initialize a string variable with the content 
    //"Finally it's friday" remember message needs ""
    int aa,bb,cc;
    double dd, ee, ff{4.5};
    string gg{"Finally, it's Friday"};
    cout<<aa<<" "<<bb<<" "<<cc<<endl;
    cout<<dd<<" "<<ee<<" "<<ff<<endl;
    cout<<gg<<endl;
    return 0;
}



