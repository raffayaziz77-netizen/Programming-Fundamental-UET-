#include<iostream>
using namespace std;
string number_to_text(int num)
{
    string ones[] = {"","one","two","three","four","five","six","seven","eight","nine"};
    string teens[] = {"ten","eleven","twelve","thirteen","fourteen","fifteen","sixteen","seventeen","eighteen","nineteen"};
    string tens[] = {"","","twenty","thirty","forty","fifty","sixty","seventy","eighty","ninety"};
    if(num >= 1 && num <= 9)
    {
        return ones[num];
    }
    else if(num >= 10 && num <= 19)
    {
        return teens[num - 10];
    }
    else if(num >= 20 && num <= 99)
    {
        int t = num / 10;
        int o = num % 10;
        if(o == 0)
            return tens[t];
        else
            return tens[t] + ones[o];
    }
    else
    {
        return "out of range";
    }
}

int main()
{
    int num;
    cout<<"Enter a number (1-99): ";
    cin>>num;
    cout<<"In words: "<<number_to_text(num);
    return 0;
}