#include<iostream>
using namespace std;
int prod_five(int n1)
{
    return n1*5;
}
int main()
{
    cout<<"Enter number: ";
    int num1,num2;
    cin>>num1>>num2;
    cout<<"product of number with 5 equals: "<<prod_five(num1);
    return 0;
}