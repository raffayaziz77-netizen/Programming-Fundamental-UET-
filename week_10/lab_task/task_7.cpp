#include<iostream>
using namespace std;
bool is_symmetric(int num1)
{
    int n1,n2,n3;
    n1 = num1%10;
    num1 = num1 / 10;
    n2 = num1%10;
    num1 = num1 / 10;
    n3 = num1%10;
    if(n1==n3){
        return true;
    }
    else{
        return false;
    }
}
int main(){
    cout<<"Enter a three digit number: ";
    int n;
    cin>>n;
    if(is_symmetric(n))
    {
        cout<<n<<" is symmetric.";
    }
    else{
        cout<<n<<" is not symmetric.";
    }
    return 0;
}
