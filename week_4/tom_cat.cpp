#include<iostream>
using namespace std;
main()
{   int holidays,working_days,playtime,diff;
    cout<<"holidays: ";cin>>holidays;
    working_days = 365-holidays;
    playtime = (holidays*127)+(working_days*63);
    if (playtime>30000){
        diff = playtime-30000;
        cout<<"tom will run away.\n";
        int hours= diff/60;
        int min = diff%60;
        cout<<hours<<" hours and "<<min<<" minutes for play.";
    }
    else{
        diff = 30000-playtime;
        cout<<"tom sleeps well.\n";
        int hours= diff/60;
        int min = diff%60;
        cout<<hours<<" hours and "<<min<<" minutes less for play.";
    }
}