#include<iostream>
using namespace std;
void palindrom(int n)
{
    int num = n;
    int rev = 0;
    while(n!=0)
    { 
      int rem = n%10;
      rev = rev*10+rem;
      n = n/10;
    }
    if(num==rev)
     {
        cout<<"number is palindrom "<<endl;
     }
     else
     {
         cout<<"number is not palindrom "<<endl;
     }
}
int main()
{
    int n;
    cout<<"enter your number :"<<endl;
    cin>>n;
    palindrom(n);

}