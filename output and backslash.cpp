//one line comment
/*multi
line
comment*/
#include <iostream>//for cout
using namespace std; //so you don't have to put std::cout all the time
int main() //main block
{
    cout<<"Hello World"<<endl; //cout-->print endl is after the ""
    //you must open and close with ""
    //cout statement must end with ;
    cout<<"another sentence"<<endl; //it will be right after the last sentence
    //how can we print the message-->"" is a quotation
    //special character \ (Backslah)
    /*
    1. \" to print a quotation 
    2. \\ to print a backslash
    3. \n nextline
    4. \t tab
    */
    cout<<"\"\" is a quotation"<<endl;
    cout<<"\\ what does this do"<<endl;
    cout<<"\\\\\\\"\"\\\""<<endl; //answer: \\\""\"
    cout<<"What\ndo you\nthank\tthey do";
    return 0;
}


