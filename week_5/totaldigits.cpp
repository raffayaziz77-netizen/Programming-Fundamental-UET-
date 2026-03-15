#include<iostream>
using namespace std;
main()
{
    int num,digit=0;
    cout<<"Enter a number: ";cin>>num;
    if (num<0){num*=-1;}
    if(num==0){digit=1;}
    while (num>0){
        digit+=1;
        num/=10;
    }
    cout<<"Total number of digits: "<<digit;
}