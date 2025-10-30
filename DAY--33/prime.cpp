#include<iostream>
using namespace std;
string isPrime(int n)
{
    if(n<2)
    return "not prime";
    for(int i =2; i * i <=n;i++)
    {
        if(n%i==0)
        {
            return "not prime";
        }
        
    }
    return "prime";
}
int main()
{
    int n;
    cout<<"enter any nuber :"<<endl;
    cin>>n;
    string ans = isPrime(n);
    cout<<"number is "<<ans<<endl;

}