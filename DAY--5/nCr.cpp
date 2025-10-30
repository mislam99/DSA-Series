#include<iostream>
using namespace std;
 int factorial(int n)
{
     int fact =1;
     for(int i=1;i<=n;i++)
     {
        fact = fact*i;
     }
     return fact;
} 
int nCr(int n,int r)
{
    int n_fact = factorial(n);
    int r_fact = factorial(r);
    int nmr_fact = factorial(n-r);
    return n_fact/(r_fact* nmr_fact );

}
int main()
{
    int n,r;
    cout<<"enter the value of n "<<endl;
    cin>>n;
    cout<<"enter the value of  r"<<endl;
    cin>>r;
    int ans = nCr(n,r);
    cout<<"nCr is"<<ans;
} 