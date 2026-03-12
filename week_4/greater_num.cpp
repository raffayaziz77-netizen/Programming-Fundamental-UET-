#include<iostream>
using namespace std;
main()
{
    int num1,num2;
    cout<<"enter a number: ";
    cin>>num1;
    cout<<"enter a number: ";
    cin>>num2;
    if (num1 > num2){
        cout<<num1<<" is greater than "<<num2;
    }
    else{
        cout<<num2<<" is greater than "<<num1;
    }
}