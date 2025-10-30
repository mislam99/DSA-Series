#include<iostream>
using namespace std;
void bubble_sort(int arr[] ,int n)
{
    for(int i=1;i<n;i++)
    { 
        int current = arr[i];
        int previous = i-1;
        while(previous >= 0 && arr[previous]>current)
        {
            arr[previous+1]= arr[previous];
            previous--;
        }
        arr[previous+1] = current;
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