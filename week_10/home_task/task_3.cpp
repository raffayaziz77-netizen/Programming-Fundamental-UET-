#include<iostream>
using namespace std;
float price_calc(float price,char choice);
int main(){
    char choice;float price;
    cout<<"Enter vehical type code (M/E/S/V/T): ";cin>>choice;
    cout<<"Enter vehical price: ";cin>>price;
    cout<<"The final price on vehical type "<<choice<<" after adding tax: "<<price_calc(price,choice);
}
float price_calc(float price,char choice)
{
    float tax_amount,final_price;
    if (choice=='M')
    {
        tax_amount=price*0.06;
    }
    else if (choice=='E')
    {
        tax_amount=price*0.08;
    }
    else if (choice=='S')
    {
        tax_amount=price*0.10;
    }else if (choice=='V')
    {
        tax_amount=price*0.12;
    }else
    {
        tax_amount=price*0.15;
    }
    final_price=tax_amount+price;
    return final_price;
}