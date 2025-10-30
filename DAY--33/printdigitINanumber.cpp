#include<iostream>
using namespace std;
void check_digit(int n)
{
    while(n>0)
    {
        int rem = n%10;   // time complexity is O(logn)
        cout<<rem<<endl;
        n = n/10;
    }
   
}
int main()
{
    int n;
    cout<<"enter your number : "<<endl;
    cin>>n;
    check_digit(n);
    return 0;
}