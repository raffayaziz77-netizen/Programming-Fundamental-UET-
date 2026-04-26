#include<iostream>
using namespace std;
bool is_even(int num1)
{
    num1 %= 10;
    if(num1%2==0){
        return true;
    }
    else{
        return false;
    }
}
int main(){
    cout<<"Enter a five digit number: ";
    int n;
    cin>>n;
    if(is_even(n))
    {
        cout<<n<<" is evenish.";
    }
    else{
        cout<<n<<" is oddish.";
    }
    return 0; 
}