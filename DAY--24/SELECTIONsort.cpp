#include<iostream>
using namespace std;
void selection_sort(int arr[] ,int n)
{
    for(int i=0;i<n-1;i++)
    {
        int min = i;
        for(int j=i+1; j<n;j++)
        {
            if(arr[j]<arr[min])
            {
               min = arr[j];
            }
        }
        swap(arr[i] , arr[min]);
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
     selection_sort(arr,n);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}