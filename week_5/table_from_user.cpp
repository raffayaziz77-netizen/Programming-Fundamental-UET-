#include<iostream>
using namespace std;
main()
{
    int num;
    cout<<"Enter a number: ";cin>>num;
    for(int n=1;n<=10;n++){
        cout<<num<<" x "<<n<<" = "<<num*n<<endl;
    }
}