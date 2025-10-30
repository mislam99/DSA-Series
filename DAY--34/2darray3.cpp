#include<iostream>
using namespace std;
int main()
{
  int n = 2,m = 2;
  int matrix[n][m];
  // for matrix data input
  cout<<"enter matrix data : "<<endl;
  for(int i=0; i<n;i++)
  {
    for(int j=0;i<m;j++)
    {
        cin>>matrix[i][j];
    }
  }
  //for matrix output
  for(int i=0; i<n;i++)
  {
    for(int j=0;i<m;j++)
    {
       cout<<matrix[i][j]<<" ";
    }
    cout<<endl;
  }

}
