#include<iostream>
using namespace std;
int main()
{
    int sum = 0;
    int n;
    cout<<"enter n: "<<endl;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        sum = sum+i;
          
    }
    cout<<"sum is = "<<sum<<endl;
}