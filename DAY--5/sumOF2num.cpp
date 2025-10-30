#include<iostream>
using namespace std;
 int sum(int a,int b)
{
    int sum = a+b;
    return sum;  
} 
int main()
{
    int a,b;
    cout<<"enter the value of a "<<endl;
    cin>>a;
    cout<<"enter the value of  b"<<endl;
    cin>>b;
    cout<<"ans is "<< sum(a,b)<<endl; 
} 