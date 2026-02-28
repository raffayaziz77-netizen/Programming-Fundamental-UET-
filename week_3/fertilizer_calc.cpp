#include<iostream>
using namespace std;

main()
{
    float size,cost,area;
    cout<<"Enter the size of the fertilizer bag in pounds: ";
    cin>>size;
    cout<<"Enter the cost of the bag: $";
    cin>>cost;
    cout<<"Enter the area in square feet that can be covered by the bag: ";
    cin>>area;
    float cost_per_pound,cost_per_sf;
    cost_per_pound = cost/size;
    cost_per_sf = cost/area;
    cout<<"Cost of the fertilizer per pound is: $"<<cost_per_pound;
    cout<<"\nCost of fertilizing per square foot: $"<<cost_per_sf;
}