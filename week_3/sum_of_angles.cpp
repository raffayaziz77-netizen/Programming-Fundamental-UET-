#include <iostream>
using namespace std;
main() 
{
 int n,sum_of_angles;   
 cout<<"Enter the number of sides of the polygon: ";
 cin>>n;
 sum_of_angles = (n -2)*180;
 cout<<n"-sided polygon is: "<<sum_of_angles<<" degrees";
} 
