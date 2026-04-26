#include<iostream>
using namespace std;
bool is_capital(char l1)
{
    if (l1 == 'A')
    {
        return true;
    }
    else{
        return false;
    }
}
int main(){
    cout<<"Enter a char (A or a): ";
    char a;
    cin>>a;
    if(is_capital(a))
    {
        cout<<a<<" is capital.";
    }
    else{
        cout<<a<<" is small.";
    }
    return 0;
}
