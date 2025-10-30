#include<iostream>
using namespace std;
int main()
{
    int matrix[4][3] = {{1,2,3},{4,5,6},{7,8,9},{10,11,12}};
    int row = 4;
    int cols = 3;
    matrix[2][1] = 10;  // it is use for change the value
    cout<<matrix[2][1]<<endl;
}
