#include<iostream>
using namespace std;
main()
{
    int ali_salary = 10000;
    int laptop_price = 50000;
    
    int advance = ali_salary*0.5;
    int total_advance = advance*6;

    if (total_advance>=laptop_price){
        cout<<"Ali can by laptop.";
    }
    else{
        int months_required = laptop_price/advance;
        cout<<"Months reqired to by laptop: "<<months_required;
    }
}