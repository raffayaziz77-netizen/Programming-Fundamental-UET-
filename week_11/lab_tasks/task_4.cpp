#include<iostream>
using namespace std;
int sum(int array[][3],int row_size)
{ 
    int sum =0;
    for (int i=0;i<row_size;i++)
    {
        for(int j=0;j<3;j++)
        {sum+=array[i][j];}
    }
    return sum;
}

int main()
{
    int rows;
    cout<<"enter rows: ";
    cin>>rows;
    int numbers[rows][3];
    cout<<"Enter elements of array.";
    for (int i=0;i<rows;i++)
    {
        for(int j=0;j<3;j++)
        {
            cout<<"enter element ["<<i<<"]["<<j<<"]";
            cin>>numbers[i][j];
        }
    }
    cout<<"sum: "<<sum(numbers,rows);
}