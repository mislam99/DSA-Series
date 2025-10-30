//this recursin function is for find nth term of fibonacci
// series
#include<iostream>
using namespace std;
int fibo(int n)
{
    if(n==0 || n==1)
    {
        return n;
    }
    return fibo(n-1)+fibo(n-2);
}
int main ()
{
    int n;
    cout<<"enter the value of n :"<<endl;
    cin>>n;
    int ans = fibo(n);
    cout<<"fibonacci seriese is :"<<ans<<" "<<endl;
}