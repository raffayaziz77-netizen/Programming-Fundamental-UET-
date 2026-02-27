#include<iostream>
#include<string>
using namespace std;
main()
{
 float matric, inter, ecat, aggregate;
 string name;
 cout << "Enter your Name: ";
 cin >> name;
 cout << "Enter your matriculation marks: ";
 cin >> matric;
 cout << "Enter your intermediate marks: ";
 cin >> inter;
 cout << "Enter your ECAT marks: ";
 cin >> ecat;
 float per_matric,per_inter,per_ecat;
 per_matric = (matric*100)/1100;
 per_inter = (inter*100)/1200;
 per_ecat = (ecat*100)/400;

 aggregate = (per_matric*0.17)+(per_inter*0.33)+(per_ecat*0.50);
 cout << "Your aggregate is: " << aggregate;
}
