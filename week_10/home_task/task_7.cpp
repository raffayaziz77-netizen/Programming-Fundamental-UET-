#include<iostream>
using namespace std;

float calculate_balance(float balance,int years)
{
    float interest;

    if(balance <= 10000)
        interest = balance * 0.05;
    else if(balance <= 50000)
        interest = balance * 0.07;
    else
        interest = balance * 0.1;

    if(years >= 3)
        interest += balance * 0.02;

    return balance + interest;
}

int main()
{
    float balance;
    int years;

    cout<<"Enter balance and years: ";
    cin>>balance>>years;

    cout<<"Final balance: "<<calculate_balance(balance,years);

    return 0;
}