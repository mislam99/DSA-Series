#include<iostream>
using namespace std;
int power(int x,int n)
{
    int pow = 1;
    for(int i=1;i<=n;i++)
    {
        pow = pow*x;
    }
     return pow;
}
int main()
{
    int x;
    cout<<"enter the value of x: "<<endl;
    cin>>x;
    int n;
    cout<<"enter the value of n: "<<endl;
    cin>>n;
    int ans = power(x,n);
    cout<<"power is = "<<ans;
}