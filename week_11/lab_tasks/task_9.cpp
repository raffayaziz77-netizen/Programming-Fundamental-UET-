#include<iostream>
using namespace std;

int count_identical_rows(int array[][3],int rows);
int main()
{
    int rows;
    cout<<"enter number of rows: ";
    cin>>rows;
    int matrix[rows][3];
    for (int i = 0; i < rows ; i++)
    {
        for (int j =0 ; j<3 ; j++)
        {
            cout<<"Enter element ["<<i<<"]["<<j<<"]";
            cin>>matrix[i][j];
        }
    }
    int identical_rows = count_identical_rows(matrix,rows);
    cout<<"identical rows: "<<identical_rows;
    return 0;
}

int count_identical_rows(int array[][3], int rows)
{
    int count = 0;

    for (int i = 0; i < rows; i++)
    {
        bool identical = true;

        for (int j = 1; j < 3; j++) 
        {
            if (array[i][j] != array[i][0])
            {
                identical = false;
                break;
            }
        }

        if (identical)
        {
            count++;
        }
    }

    return count;
}