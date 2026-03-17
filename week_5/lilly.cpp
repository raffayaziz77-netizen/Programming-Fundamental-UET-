 #include<iostream>
 using namespace std;
 main()
 {
    int age,price,toy_price;
    cout<<"Lilly's Age: ";cin>>age;
    cout<<"Price of washing machine: ";cin>>price;
    cout<<"toy Unit price: ";cin>>toy_price;
    int toys=0,money=10,balance=0;
    for (int i=1;i<=age;i++)
    {
        if(i%2==0){
            balance = balance + money - 1;
            money = money + 10;
        }
        else {
            toys = toys + 1;
        }
    }
    int total = balance+(toys*toy_price);
    if(total >= price)
    {
        cout << "Yes! \n" << total - price;
    }
    else
    {
        cout << "No! \n" << price - total;
    }
 }