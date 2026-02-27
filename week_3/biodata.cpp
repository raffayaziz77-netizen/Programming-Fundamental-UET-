#include<iostream>
#include<string>
using namespace std;
main()
{
 string name;
 int roll_no;
 float aggregate;
 string section;
 cout << "Enter your name: ";
 cin >> name;
 cout << "Enter your roll number: ";
 cin >> roll_no;
 cout << "Enter your aggregate: ";
 cin >> aggregate;
 cout << "Enter your section: ";
 cin >> section;
 cout << "\n-------STUDENT INFO-------\n"
 cout << "NAME:"<< name << 
         "\nROLL.NO:" << roll_no << 
         "\nAGGREGATE:"<< aggregate << 
         "\nSECTION:"<< section;
}

