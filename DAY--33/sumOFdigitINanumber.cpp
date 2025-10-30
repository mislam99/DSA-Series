#include<iostream>
using namespace std;
void check_digit(int n)
{
    int sum = 0;
    while(n>0)
    {
        int rem = n%10;  // time complexity is O(logn)
        sum = sum+rem;
        n = n/10;
    }
    cout<<"sum of digit is = "<<sum<<endl;
}
int main()
{
    int n;
    cout<<"enter your number : "<<endl;
    cin>>n;
    check_digit(n);
    return 0;
}