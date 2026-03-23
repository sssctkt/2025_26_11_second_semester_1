
#include <iostream>
using namespace std;
int main()
{
    int mark;
    cout<<"Please enter the mark for English: ";
    cin>>mark;
    
    if (mark>=50){
        cout<<"You pass"<<endl;
        cout<<"congrats!!"<<endl;
    }
    
    else{
        cout<<"You did not pass"<<endl;
        cout<<"Sorry to hear that"<<endl;
    }
    cout<<"Done"<<endl;
    return 0;
}