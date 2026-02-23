//3 even better version

#include <iostream>
using namespace std;

int main(){
    float celsius; //we use float because we expect decimal
    float fahrenheit;
    cout<<"Enter temperature in fahrenheit: ";
    cin>>fahrenheit; //this is how we collect input!
    celsius=(fahrenheit-32)*5/9.0; 
    cout<<"The temperature in celsius is : "<<celsius<<endl;
}