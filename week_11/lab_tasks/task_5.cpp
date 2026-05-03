#include <iostream>
using namespace std;

bool identityMatrix(int arrData[3][3]);
int main()
{
  int arrData[3][3];

  for (int i = 0; i < 3; i++)
  {
    for (int j = 0; j < 3; j++)
    {
      cout << "Enter element at position: [" << i << "][" << j << "]";
      cin >> arrData[i][j];
    }
  }
  if (identityMatrix(arrData))
  {
    cout << "The matrix is an identity Matrix.";
  }
  else
  {
    cout << "The matrix is not an identity Matrix.";
  }
}
bool identityMatrix(int arrData[3][3])
{   bool diag=true;
    bool non_diag=true;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if((i==j&&arrData[i][j]==1)||(i!=j&&arrData[i][j]==0))
            {
               continue;
            }
            else
            {
              diag=false;
              non_diag=false;
            }

        }  
    }
    if(diag&&non_diag)
    {
        return true;
    }
    else
    {
        return false;
    }
    
}