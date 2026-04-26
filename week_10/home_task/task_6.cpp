#include<iostream>
using namespace std;

bool is_strong(int n);
int factorial( int num);
int main()
{
    int number;
    cout<<"Enter number: ";
    cin>>number;
    if(is_strong(number))
    {
        cout<<"Strong number";
    }
    else
    {
        cout<<"Not strong number";
    }
    return 0;
}

int factorial(int num)
{
    int fact=1;
    for(int i = 1; i<=num ; i++)
    { 
        fact *= i;
    }
    return fact;
}
bool is_strong(int n)
{
    int x,y=0,orignal_n = n;
    while(n>0)
    {
        x = n%10;
        y= y+factorial(x);
        n /=10;
    }
    if (y==orignal_n){
        return true;
    }
    else{
        return false;
    }
}