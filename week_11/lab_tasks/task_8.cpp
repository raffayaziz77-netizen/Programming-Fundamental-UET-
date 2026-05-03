#include<iostream>
using namespace std;

int greatest_col(int array[][5]);
void swap_col(int col,int array[][5]);
int main()
{
    int array_2d [3][5];
    cout<<"enter elements: ";
    for(int i=0;i<3;i++)
    {
        for(int j=0 ; j<5;j++)
        {
            cin>>array_2d[i][j];
        }
    }
    cout<<"Original array:\n";
    for(int i=0;i<3;i++)
    {
        for(int j=0 ; j<5;j++)
        {
            cout<<array_2d[i][j]<<"\t";
        }
        cout<<endl;
    }
    int biggest_col = greatest_col(array_2d);
    swap_col(biggest_col, array_2d);
    cout<<"shifted array:\n";
    for(int i=0;i<3;i++)
    {
        for(int j=0 ; j<5;j++)
        {
            cout<<array_2d[i][j]<<"\t";
        }
        cout<<endl;
    }
    return 0;
}
int greatest_col(int array[][5])
{
    int max = 0;
    int col = 0;
    for(int i = 0;i<5;i++)
    {
        int sum = 0;
        for(int j = 0;j<3;j++)
        {
            sum +=array[j][i];
        }
      if(sum>max)
      {
        max = sum;
        col = i;
      }
    }
    return col;
}
void swap_col(int col,int array[][5])
{
    if(col != 0)
    {
        for (int i = 0;i<3;i++)
        {
            int temp = array[i][0];
            array[i][0]=array[i][col];
            array[i][col]=temp;
        }
    }
}