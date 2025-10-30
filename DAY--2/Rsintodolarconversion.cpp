// we have to convert Rs into dollar
#include<iostream>
using namespace std;
void dollar(int n)
{
    float dollar;
    dollar = n*86.20;
    cout<<"Rs in dollar is:"<<dollar<<endl;
}
int main()
{
    int n;
    cout<<"enter the amount Rs :"<<endl;
    cin>>n;
    dollar(n);
}