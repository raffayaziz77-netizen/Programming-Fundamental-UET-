#include<iostream>
#include<string>
using namespace std;
main()
{
    cout << "Enter the name of the person: ";
    string name;
    cin >> name;

    cout << "Enter the target weight loss in kilogram: ";
    float target;
    cin >> target;

    float days = target * 15;

    cout << name << " will need " << days 
         << " days to lose " << target 
         << " kg of weight by following the doctor's suggestion.";
    
}