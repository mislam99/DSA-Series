#include<iostream>
#include<vector>
using namespace std;
int recubinsearch(vector<int> arr,int tar,int st,int end)
{
    if(st<=end)
    {
      int mid = st+(end-st)/2;
      if(tar>arr[mid])
      {
        return recubinsearch(arr,tar,mid+1,end);
      }
      else if(tar<arr[mid])
      {
        return recubinsearch(arr,tar,st,mid-1);
      }
      else{
        return mid;
      }
      
    }
    return -1;
}
int main()
{
   vector<int>arr2 = {-1,0,3,5,9,12};
  int tar = 20;
  cout<<recubinsearch(arr2,tar)<<endl;
}