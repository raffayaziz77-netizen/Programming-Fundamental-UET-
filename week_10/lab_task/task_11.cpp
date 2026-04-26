#include<iostream>
using namespace std;

string calculate_pool_state(int V,int P1,int P2,float H)
{
    float total = (P1 + P2) * H;

    if(total <= V)
    {
        int pool_per = (total / V) * 100;
        int p1_per = (P1 * H / total) * 100;
        int p2_per = (P2 * H / total) * 100;
        return "The pool is " + to_string(pool_per) + "% full. Pipe 1: " 
        + to_string(p1_per) + "%. Pipe 2: " + to_string(p2_per) + "%.";
    }
    else
    {
        float extra = total - V;
        return "For " + to_string(H) + " hours the pool overflows with " 
        + to_string(extra) + " liters.";
    }
}

int main()
{
    int V,P1,P2;
    float H;
    cout<<"Enter pool volume: ";
    cin>>V;
    cout<<"Enter pipe 1 flow rate: ";
    cin>>P1;
    cout<<"Enter pipe 2 flow rate: ";
    cin>>P2;
    cout<<"Enter hours: ";
    cin>>H;
    cout<<calculate_pool_state(V,P1,P2,H);
    return 0;
}