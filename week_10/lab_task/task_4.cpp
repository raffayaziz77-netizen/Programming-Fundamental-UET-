#include<iostream>
#include<cmath>
using namespace std;
float height_calc(float distance, float angle_deg)
{
    float angle_rad = angle_deg / 57.2958;
    return distance * tan(angle_rad);
}
int main()
{
    float num1, num2;
    cout << "Enter distance from the base of the tree: ";
    cin >> num1;
    cout << "Enter the angle of elevation (in degrees): ";
    cin >> num2;
    cout << "The height of the tree is: " << height_calc(num1, num2);
    return 0;
}