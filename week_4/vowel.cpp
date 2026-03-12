#include<iostream>
using namespace std;
main()
{
    char ch;
    cout<<"Enter any lower case chracter: ";
    cin>>ch;

    if (ch=='a'){
       cout<<"its a vowel.";
    }
    if (ch=='e'){
       cout<<"its a vowel.";
    }
    if (ch=='i'){
       cout<<"its a vowel.";
    }
    if (ch=='o'){
       cout<<"its a vowel.";
    }
    if (ch=='u'){
       cout<<"its a vowel.";
    }

    if (ch>='0'){
        if (ch<='9'){
            cout<<"its a number.";
        }
    }

    if (ch>='a'){
        if (ch<='z'){
            if (ch!='a'){
                if (ch!='e'){
                    if (ch!='i'){
                        if (ch!='o'){
                            if (ch!='u'){
                                cout<<"its a consonant.";
                            }
                        }
                    }
                }
            }
        }
    }
}