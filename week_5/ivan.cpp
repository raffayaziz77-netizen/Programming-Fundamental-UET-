#include <iostream>
using namespace std;

 main()
{
    int money, endYear;
    cin >> money >> endYear;
    int age = 18; 
    int year = 1800;
    while (year <= endYear) {
        if (year % 2 == 0) {
            money -= 12000; 
        } else {
            money -= 12000 + 50 * age; 
        }

        if (money < 0) break; 
        age++;
        year++;
    }

    if (money >= 0) {
        cout << "Yes! He will live a carefree life and will have " << money << " dollars left." << endl;
    } else {
        int deficit = -money;
        cout << "He will need " << deficit << " dollars to survive." << endl;
    }


}