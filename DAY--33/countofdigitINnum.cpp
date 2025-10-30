#include<iostream>
using namespace std;
void check_digit(int n)
{
    int count = 0;
    while(n>0)
    {
        int rem = n%10;   // time complexity is O(logn)
        count++;
        n = n/10;
    }
    cout<<"digit in number is = "<<count<<endl;
}
int main()
{
    int n;
    cout<<"enter your number : "<<endl;
    cin>>n;
    check_digit(n);
    return 0;
}