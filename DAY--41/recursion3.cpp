//this recursion fuction is to find the sum of number
#include<iostream>
using namespace std;
int sum(int n)
{

    int ans;
    if(n==1)
    {
        return 1;
    }
   
     ans = n+sum(n-1);
    return ans;
}
int main()
{
    int n;
    cout<<"enter a number :"<<endl;
    cin>>n;
    cout<<"sum is: "<<sum(n)<<endl;
}