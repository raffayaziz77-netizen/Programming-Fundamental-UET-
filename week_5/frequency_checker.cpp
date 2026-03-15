#include<iostream>
using namespace std;
main()
{
    int frequency = 0;
    cout<<"Enter a number: ";int n;cin>>n;
    cout<<"Enter digit: ";int d;cin>>d;
    for (int r = n; r>0 ;r=r/10){
        if (r%10 == d){
            frequency+=1;
        }
    }
    cout<<"Frequency of "<<d<<" in "<<n<<" = "<<frequency;
}