 #include<iostream>
using namespace std;
int sum(int n)
{
    int sum =0;
    for(int i=1;i<=n;i++)
    {
        sum = sum+i;
    }
    return sum;
}
int main()
{
    int n;
  cout<<"enter n "<<endl;
  cin>>n;
 int ans = sum(n);
  cout<<"sum is "<<ans<<endl;

} 