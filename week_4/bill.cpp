#include<iostream>
using namespace std;
int main()
{
    int bill,discount;
    cout<<"Enter yor bill: ";
    cin>>bill; 
    if (bill<= 5000){
        discount = bill*0.05;
    }
    else{
        discount = bill*0.1;
    }
    bill = bill - discount;
    cout<<"your discounted bill is: "<<bill;
    return 0;
}