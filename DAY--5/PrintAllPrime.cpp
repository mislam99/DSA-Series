#include<iostream>
using namespace std;
// function to chek prme
 bool prime(int n)
{
    if(n<2)
    return false;
    for(int i=2;i<=n-1;i++)
    {
        if(n%i==0)
        return false;
    }
    return true;
}
// function to print prme
void print(int n)
{
    for(int i=2;i<=n;i++)
    {
        if(prime(i)){
        cout<<i<<" ";
        }
    }
}
int main()
{
    int n;
 cout<<"enter n = "<<endl;
 cin>>n;
 print(n);
 
} 