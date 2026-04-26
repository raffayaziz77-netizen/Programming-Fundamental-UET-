#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    cout << "Enter numbers: ";
    int num1, num2;
    cin >> num1 >> num2;
    cout << "max number is: " << max(num1, num2);
    return 0;
}