#include<iostream>
using namespace std;
void check_armstrong(int n)
{
    int num = n;
    int sum = 0;
    while(n>0)
    {
        int rem = n%10;   // time complexity is O(logn)
        sum = sum+rem*rem*rem;
        n = n/10;
    }
    if(num==sum){
        cout<<"number is armstrong"<<endl;
    }
    else{
          cout<<"number is not armstrong"<<endl;
    }
    
}
int main()
{
    int n;
    cout<<"enter your number : "<<endl;
    cin>>n;
    check_armstrong(n);
    return 0;
}