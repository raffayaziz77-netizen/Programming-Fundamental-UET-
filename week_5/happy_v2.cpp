#include <iostream>
using namespace std;
main()
{
char ch = 'y';
while(ch != 'n'&&ch != 'N'){
    cout << "I am Happy! \n";
    cout << "Enter your choice: ";cin >> ch;
    }
}