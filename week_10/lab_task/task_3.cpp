#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    cout << "Enter numbers to sum: ";
    int num1, num2;
    cin >> num1 >> num2;
    cout << "sum equals: " << max(num1, num2);
    return 0;
}