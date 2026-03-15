#include<iostream>
using namespace std;
main()
{
    int i,j,rows;
    rows = 5;
    for(int i = 1;i<=rows;i++){
        for (int j = 1; j <= i; j++)
        {
            cout<<"*";
        }
        cout<<"\n";
    }
    for(int i = rows;i>=1;i--){
        for (int j = 1; j <= i; j++)
        {
            cout<<"*";
        }
        cout<<"\n";
    }
}