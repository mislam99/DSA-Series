#include<iostream>
using namespace std;
int sum(int arr[],int n)
{
    int sum = 0;
    for(int i=0;i<n;i++)
    {
        sum = sum+arr[i];
    }
    return sum;
}
int product(int arr[],int n)
{
    int product = 1;
    for(int i=0;i<n;i++)
    {
        product = product*arr[i];
    }
    return product;
}
int main()
{
    int arr[5] = {1,2,3,4,5};
    int ans = sum(arr,5);
    int pensor = product(arr,5);
    cout<<"sum is "<<ans<<endl;
    cout<<"sum is "<<pensor<<endl;


}
