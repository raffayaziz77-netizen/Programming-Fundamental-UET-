#include<iostream>
#include<cmath>
using namespace std;
//function prototype 
int project_time_calc(float hours, float days,float workers);
//main function
int main(){
    float hours_needed,days_required,workers;
    cout<<"Enter hours needed: ";cin>>hours_needed;
    cout<<"Enter days required: ";cin>>days_required;
    cout<<"Enter workers available";cin>>workers;
    int hours_avail = project_time_calc(hours_needed,days_required,workers);
    if(hours_avail>=hours_needed)
    {
    cout << "Yes!" << hours_avail- hours_needed << " hours left.";
    }
    else
    {
      cout << "Not enough time!" << hours_needed - hours_avail << " hours needed.";
    }
    return 0;
}
//defining function
int project_time_calc(float hours, float days,float workers)
{
    float working_days = days-(days*0.10);
    float working_hours = working_days*10*workers;
    //rounding off
    int final_hours = floor(working_hours);
    return final_hours;
}