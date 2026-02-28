#include<iostream>
using namespace std;

int main()
{
    int number;

    cout<<"Enter a 4-digit number: ";
    cin>>number;

    int digit_1,digit_2,digit_3,digit_4;

    digit_1 = number%10;
    number = number/10;

    digit_2 = number%10;
    number = number/10;

    digit_3 = number%10;
    number = number/10;

    digit_4 = number%10;
    
    int sum;

    sum = digit_1+digit_2+digit_3+digit_4;
    cout<<"The sum of the digits is: "<<sum;
    return 0;
}
