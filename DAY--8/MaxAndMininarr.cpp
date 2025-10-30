#include<iostream>
#include <climits>
using namespace std;
int max(int arr[],int n)
{
    int largest = INT_MIN;
    for(int i=0;i<n;i++)
    {
        if(arr[i]>largest)
        {
            largest = arr[i];
        }
    }
    return largest;
}
int min(int arr[],int n)
{
    int smallest = INT_MAX;
    for(int i=0;i<n;i++)
    {
        if(arr[i]< smallest)
        {
            smallest = arr[i];
        }
    }
    return  smallest;
}
int main()
{
    int arr[50];
    int n;
     cout<<"sizeof array  "<<endl;
     cin>>n;
    cout<<"enter array element "<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int maxi = max(arr,n);
    int mini = min(arr,n);
  
  cout<<"largest element is "<<maxi<<endl;
  cout<<"smallest element is "<<mini<<endl;

}