#include<iostream>
using namespace std;
main()
{
    string word1,word2;
    cout<<"enter a word: ";
    cin>>word1;
    cout<<"enter another word: ";
    cin>>word2;
    if (word1==word2){
        cout<<"the words are same.";
    }
    else{
        cout<<"the words are different";
    }
}