#include<iostream>
using namespace std;
string time_travel(int hours,int minutes)
{
    int diff = 60-minutes;
    if(minutes+15>60)
    {
        minutes = 15-diff;
        hours++;
    }
    else{
        minutes += 15;
    }
    return to_string(hours) + ":" + to_string(minutes);
}
int main(){
    cout<<"Enter hours: ";
    int hours;
    cin>>hours;
    cout<<"Enter minutes: ";
    int minutes;
    cin>>minutes;
    cout<<time_travel(hours,minutes);
 
}