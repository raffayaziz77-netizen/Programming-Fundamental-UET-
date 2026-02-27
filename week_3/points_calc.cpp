#include <iostream>
using namespace std;
main() 
{
 int wins,draws,losses,points;
 cout<<"Enter the number of wins: ";
 cin>>wins;
 cout<<"Enter the number of draws: ";
 cin>>draws;
 cout<<"Enter the number of losses: ";
 cin>>losses;
 points = (wins*3)+draws;
 cout<<"Pakistan has obtained  "<<points<<" in World Cup Tournament";
} 