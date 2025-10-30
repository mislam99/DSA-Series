#include<iostream>
#include<climits>
using namespace std;
int getmaxsum(int matrix[3][3],int row,int col)
{
    int maxrowsum = INT_MIN;
    for(int i=0;i<row;i++)
    {
        int rowsum = 0;
        for(int j=0;j<col;j++)
        {
            rowsum = rowsum+matrix[i][j];
        }
        maxrowsum = max(rowsum,maxrowsum);
    }
    return maxrowsum;
}
int main()
{
    int row = 3 ,col = 3;
    int matrix[3][3] = {{1,2,30},{4,5,6},{7,8,9}};
    cout<<getmaxsum(matrix , row,col)<<endl;
}

