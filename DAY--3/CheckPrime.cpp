#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter any num ="<<endl;
    cin>>n;
    bool isPrime = true;
    for(int i=2;i<=n-1;i++)
    {
        if(n%i==0)
        {
            isPrime = false;
            break;
        }
    }
    if(isPrime==true)
    {
        cout<<"num is prime"<<endl;
    }
    else{
          cout<<"num is not prime"<<endl;
    }
    
    
}