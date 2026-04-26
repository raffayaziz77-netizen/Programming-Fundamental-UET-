#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    float num1, num2;
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin>> num2;
    cout << "the min of "<<num1<<" and "<<num2<<" is: " << min(num1, num2);
    return 0;
}