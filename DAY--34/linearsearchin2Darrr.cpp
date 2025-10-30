#include<iostream>
using namespace std;
bool search(int matrix[4][3],int rows, int cols, int key)
{
    for(int i=0;i<rows;i++)
    {
        for(int j=0;i<cols;j++)
        {
            if(matrix[i][j]==key)
            {
                return true;
            }
        }
    }
    return false;
}
int main()
{
    int rows = 4;
    int cols = 3;
    int matrix[4][3] = {{1,2,3},{4,5,6,},{7,8,9,},{10,11,12}};
    int key;
    cout<<"enter search element :"<<endl;
    cin>>key;
    cout<<search(matrix,rows,cols,key)<<endl;
}