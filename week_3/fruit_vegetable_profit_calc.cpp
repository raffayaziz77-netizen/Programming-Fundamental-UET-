#include<iostream>
using namespace std;

int main()
{
    float veg_price,frt_price,total_earings,total_earnings_in_coins;
    int tot_veg,tot_frt;
    cout<<"Enter vegetable price per kilogram (in coins): ";
    cin>>veg_price;
    cout<<"Enter fruit price per kilogram (in coins): ";
    cin>>frt_price;
    cout<<"Enter total kilogram of vegetable: ";
    cin>>tot_veg;
    cout<<"Enter total kilogram of fruits: ";
    cin>>tot_frt;
    total_earnings_in_coins = (veg_price*tot_veg)+(frt_price*tot_frt);
    total_earings = total_earnings_in_coins/1.94;
    cout<<"Total earnings in Rupees (rps): "<<total_earings;
    return 0;
}
