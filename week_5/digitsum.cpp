#include<iostream>
using namespace std;
main()
{
    int num,sum=0;
    cout<<"Enter a number: ";cin>>num;
    if (num<0){num*=-1;}
    while(num>0){
        sum+=num%10;
        num/=10;
    }
    cout<<"Sum: "<<sum;
}