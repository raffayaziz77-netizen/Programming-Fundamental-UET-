#include<iostream>
using namespace std;
main()
{
    int n1,n2,n3;
    char op;
    cout<<"Enter a number: ";
    cin>>n1;
    cout<<"Enter an opreator: ";
    cin>>op;
    cout<<"Enter a number: ";
    cin>>n2;
    if (op=='+'){
        n3 = n1-n2;
        cout<<n1<<" - "<<n2<<" = "<<n3;
    }
     if (op=='-'){
        n3 = n1+n2;
        cout<<n1<<" + "<<n2<<" = "<<n3;
    }
     if (op=='*'){
        n3 = n1/n2;
        cout<<n1<<" / "<<n2<<" = "<<n3;
    }
     if (op=='/'){
        n3 = n1*n2;
        cout<<n1<<" * "<<n2<<" = "<<n3;
    }

}