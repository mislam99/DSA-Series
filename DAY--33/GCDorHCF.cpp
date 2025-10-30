#include<iostream>
using namespace std;
int gcd(int a , int b)
{
    while(a>0 && b>0)
    {
        if(a>b)
        {
            a = a%b;
        }
        else{
            b = b%a;
        }
    }
    if(a==0)
    {
        return b;
    }
    else{
        return a;
    }
}
int main()
{
    int a,b;
    cout<<"enter the value of a :"<<endl;
    cin>>a;
    cout<<"enter the value of b :"<<endl;
    cin>>b;
    int ans = gcd(a,b);
    cout<<" GCD is = "<<ans<<endl;
}