// this is recursion fuction to print the number in reverse 
// order
#include<iostream>
using namespace std;
void print(int n)
{
    if(n==1)  /// this is base case
    {
        cout<<1;
        return;
    }
    cout<<n<<" ";
    print(n-1);
}
int main()
{
    int n;
    cout<<"enter the value of n :"<<endl;
    cin>>n;
    print(n);
}