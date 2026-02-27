#include <iostream>
using namespace std;
main() 
{
 int n,w,h;   
 cout<<"Enter paint area: ";
 cin>>n;
 cout<<"Enter width: ";
 cin>>w;
 cout<<"Enter height: ";
 cin>>h;
 int walls_painted = n/(w*h);
 cout<<"Walls painted = "<<walls_painted;
}  
