#include<iostream>
using namespace std;
main()
{
    string password,user_enter;
    password="!@#123qwe";
    cout<<"enter a password: ";
    cin>>user_enter;
    if (password==user_enter){
        cout<<"wow! you have cracked the code.";
    }
    else{
        cout<<"it is not that simple! try again.";
    }
}