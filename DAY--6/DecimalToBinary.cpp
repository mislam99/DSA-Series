#include<iostream>
using namespace std;
int binary(int n)
{
    int ans = 0;
    int pow = 1;
    while(n!=0)
    {
        int rem = n%2;
        n = n/2;
        ans = ans+rem*pow;
        pow = pow*10;
    }
    return ans;
}
int main()
{
    int n;
    cout<<"enter any number "<<endl;
    cin>>n;
    int ans = binary(n);
    cout<<"the decimal number is ="<<ans;

}