#include<iostream>
using namespace std;
int binarysearch(int arr[] ,int n, int target)
{
    
    int st = 0;
    int end = n-1;
    int mid = (st+end)/2;
    while(st<end)
    {
       if(arr[mid]==target)
       {
        return mid;
       }
       if(arr[mid]>target)   // time complexity is O(log n)
       {
        end = mid-1;
       }
       else{
        st = mid+1;
       }
       mid = (st+end)/2;
    }
    return -1;

}

int main()
{
    int n = 100;
 int arr[n];
 cout<<"nter the array size :"<<endl;
 cin>>n;
 cout<<"nter the array element :"<<endl;
 for(int i=0;i<n;i++)
 {
    cin>>arr[i];
 }
 int target;
  cout<<"nter the target"<<endl;
  cin>>target;
  int answer = binarysearch(arr,n,target);
  cout<<"our target is prasent at index  "<<answer<<endl;
 

}