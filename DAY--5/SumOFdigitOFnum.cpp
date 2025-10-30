#include<iostream>
using namespace std;
int sumofdigit(int n)
{
    int sum = 0,rem;
    while(n!=0)
    {
      rem = n%10;
      sum = sum+rem;
      n = n/10;
    }
    return sum;
}
int main()
{
    int n;
    cout<<"enter any number= "<<endl;
    cin>>n;
    int ans = sumofdigit(n);
    cout<<"sum of digit is  "<<ans;

}