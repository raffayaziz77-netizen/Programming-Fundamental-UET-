#include<iostream>
using namespace std;
main()
{
    cout<<"enter first number: ";int n1;cin>>n1;
    cout<<"enter second number: ";int n2;cin>>n2;
    int gcd = 0;
    int i = n2;
    while (i>=1)
    {
        if (n1%i==0&&n2%i==0){
            gcd = i;
            break;
        }
        i--;
    }
    int lcm = (n1*n2)/gcd;
    cout<<"GCD = "<<gcd<<endl;
    cout<<"LCM = "<<lcm; 
}