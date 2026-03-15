#include<iostream>
using namespace std;
main()
{
    int num = 0,sum=0;
    while (num>=0)
    {
        sum+=num;
        cout<<"Enter number: ";cin>>num;
    }
    cout<<"SUM: "<<sum;
}