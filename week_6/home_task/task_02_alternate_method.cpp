#include<iostream>
using namespace std;
void even_count(int arr[], int size){
    int even=0;
    for (int j=0;j<size;j++)
    {
        if (arr[j]%2==0)
        {
            even+=1;
        }
    }
    cout<<"Total even numbers: "<<even;
}

int main()
{
    int num_elements;
    cout<<"Enter number of elements: ";cin>>num_elements;
    int array[num_elements];
    cout<<"Enter "<<num_elements<<" numbers: ";
    for (int idx=0;idx<num_elements;idx++)
    {
        cin>>array[idx];
    }
    even_count(array,num_elements);
    return 0;
}