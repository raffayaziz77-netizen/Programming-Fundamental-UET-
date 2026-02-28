#include<iostream>
using namespace std;
main()
{
 int i_velocity,time,acceleration,f_velocity;    
 cout<<"Enter initial velocity: ";
 cin>>i_velocity;
 cout<<"Enter acceleration: ";
 cin>>acceleration;
 cout<<"Enter time: ";
 cin>>time;
 f_velocity = (acceleration*time)+i_velocity;
 cout<<"Final velocity = "<<f_velocity;
} 
