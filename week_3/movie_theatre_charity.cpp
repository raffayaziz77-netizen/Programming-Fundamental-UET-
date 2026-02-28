#include<iostream>
using namespace std;

main()
{
    string name;
    int adult_price,child_price,child_ticket_sold,adult_ticket_sold;
    float charity;
    cout<<"Enter the movie name: ";
    cin>>name;
    cout<<"Enter adult ticket price: $";
    cin>>adult_price;
    cout<<"Enter child ticket price: $";
    cin>>child_price;
    cout<<"Enter the number of adult tickets sold: ";
    cin>>adult_ticket_sold;
    cout<<"Enter the number of child tickets sold: ";
    cin>>child_ticket_sold;
    cout<<"Enter the percentage of amount to be donated to charity: ";
    cin>>charity;
    float total,donation,remaining,charity_percent;
    total = (adult_price*adult_ticket_sold)+(child_price*child_ticket_sold);
    charity_percent = charity/100;
    donation = total*charity_percent;
    remaining = total-donation;
    cout<<"\n--------------------------------\n";
    cout<<"Movie: "<<name;
    cout<<"\nTotal amount generated from tickets: $"<<total;
    cout<<"\nDonation to charity ("<<charity<<"%): $"<<donation;
    cout<<"\nRemaining amount after donation: $"<<remaining;
}