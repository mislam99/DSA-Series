#include<iostream>
using namespace std;
void bubble_sort(int arr[] ,int n)
{
    for(int i=0;i<n-1;i++)
    {
        for(int j=0; j<n-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                swap(arr[j],arr[j+1]);
            }
        }
    }
}
int main()   // time complexity is O(n^2)
{
    int n;
    cout<<"enter array size :"<<endl;
    cin>>n;
    int arr[n];
    cout<<"enter array element :"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
     bubble_sort(arr,n);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}