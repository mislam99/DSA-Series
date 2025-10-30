#include<iostream>
using namespace std;
int decimal(int n)
{
    int ans = 0;
    int pow = 1;
    while(n!=0)
    {
        int rem = n%10;
        n = n/10;
        ans = ans+rem*pow;
        pow = pow*2;
    }
    return ans;
}
int main()
{
    int n;
    cout<<"enter any number "<<endl;
    cin>>n;
    int ans = decimal(n);
    cout<<"the decimal number is ="<<ans;

}