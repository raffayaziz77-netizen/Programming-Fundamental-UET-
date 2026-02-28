#include<iostream>
using namespace std;
main()
{
 int min,fps,frames;
 cout<<"Number of minutes: ";
 cin>>min;
 cout<<"Frames per second: ";
 cin>>fps;
 frames = min*60*fps;
 cout<<"Total Number of Frames: "<<frames;
}
