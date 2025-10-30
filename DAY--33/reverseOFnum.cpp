#include<iostream>
using namespace std;
int reverse(int n)
{
    int ans = 0;
    while(n>0)
    {
        int rem = n%10;
        ans = (ans*10)+rem;
         n = n/10;
    }
    return ans;
}
int main()
{
    int n;
    cout<<"enter your number : "<<endl;
    cin>>n;
    int rev = reverse(n);
    cout<<" reverse is "<<rev<<endl;


} 