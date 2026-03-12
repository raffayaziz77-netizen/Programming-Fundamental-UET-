#include<iostream>
using namespace std;
main()
{   float red_rose,white_rose,tulips,price,discount;
    cout<<"Red Rose: ";cin>>red_rose;
    cout<<"White Rose: ";cin>>white_rose;
    cout<<"Tulips: ";cin>>tulips;
    price = (red_rose*2.00)+(white_rose*4.10)+(tulips*2.50);
    cout<<"Original price: "<<price<<endl;
    if (price>200){
        discount = price*0.20;
        price -= discount;
        cout<<"Price after discount: "<<price;}
}