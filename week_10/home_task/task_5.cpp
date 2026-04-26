#include<iostream>
using namespace std;
//function prototype 
float bonus_calc(int s,int x);
int final_salary(float bonus,int base);
//main function
int main(){
    int base,score,exp;
    cout<<"Enter base: ";cin>>base;
    cout<<"Enter score: ";cin>>score;
    cout<<"Enter experience: ";cin>>exp;
    cout<<"Final salary: "<<final_salary(bonus_calc(score,exp),base);
    return 0;
}
//defining function
float bonus_calc(int s, int x)
{
    float score_bonus=0,exp_bonus=0,tot_bonus;
    if(s>=90)
    {
        score_bonus=0.20;
    }
    else if (s<90 && s>=75)
    {
        score_bonus=0.10;
    }
    else
    {
        score_bonus=0.05;
    }
    if(x>=5)
    {
        exp_bonus=0.05;
    }
    tot_bonus=score_bonus+exp_bonus;
    return tot_bonus;
}
int final_salary(float bonus, int base)
{
    return base+base*bonus;
}