#include <iostream>
using namespace std;
main() 
{
  int population,n,population_in_three_decade;
  cout<<"Enter the current world population: ";
  cin>>population;
  cout<<"Enter the monthly birth rate (number of births per month): ";
  cin>>n;
  int births_in_three_decade = 360*n;
  population_in_three_decade = births_in_three_decade+population;
  cout<<"Population in three decades will be: " 
  <<population_in_three_decade;
} 