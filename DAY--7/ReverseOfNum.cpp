#include<iostream>
using namespace std;
int reverse(int n)
{
    int ans = 0;
    while(n!=0)
    {
        int rem = n%10;
       ans = ans*10+rem;
        n = n/10;
        
    }
    return ans;
}
int main()
{
    int n;
    cout<<"enter any number "<<endl;
    cin>>n;
    int ans = reverse(n);
    cout<<"the  reverse number is ="<<ans;

}