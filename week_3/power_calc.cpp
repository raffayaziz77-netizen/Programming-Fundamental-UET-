#include <iostream>
using namespace std;

main()
{
  float volt, current, power;
  cout << "Enter Voltage(in volts): ";
  cin >> volt;
  cout << "Enter Current(in ampere): ";
  cin >> current;
  power = volt*current;
  cout <<"the power is " << power << " watts";

}
 

