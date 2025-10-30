// this recursion function to find facorial
#include<iostream>
using namespace std;
int fact(int n)
{
    
    if(n==0)  // base case
    {
        return 1;
    }
    
    return n*(fact(n-1));
}
int main()
{
    int n;
    cout<<"enter the value of n :"<<endl;
    cin>>n;
    int ans = fact(n);
    cout<<" facorial is :"<<ans<<endl;

}