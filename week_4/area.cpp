#include<iostream>
using namespace std;
main()
{   string shape;
    float l,w,r,b,h;
    cout<<"Shape: ";cin>>shape;
    if (shape == "square"){
        cin>>l;
        cout<<l*l;
    }
    if (shape == "rectangle"){
        cin>>l;cin>>w;
        cout<<l*w;
    }
    if (shape == "circle"){
        cin>>r;
        cout<<3.14159*r*r;
    }
    if (shape == "triangle"){
        cin>>b;cin>>h;
        cout<<0.5*b*h;
    }
}