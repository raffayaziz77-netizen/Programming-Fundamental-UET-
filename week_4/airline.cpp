#include<iostream>
using namespace std;
main()
{   string country;int price,discount;
    cout<<"Country: ";cin>>country;
    cout<<"Ticket price: ";cin>>price;
    discount = price*0.05;
    if (country=="ireland"||country=="Ireland"){
        discount = price*0.1;
    } 
    cout<<"Disconted price: "<<price-discount;}