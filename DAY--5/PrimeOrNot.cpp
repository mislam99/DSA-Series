 #include<iostream>
using namespace std;
bool isPrime(int n)
{
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
        cout<<"number is prime "<<endl;
    }
    else{
        cout<<"number is not prime "<<endl;
    }

}
int main()
{
 int n;
 cout<<"enter the value of n "<<endl;
 cin>>n;
 bool found = isPrime(n);

} 