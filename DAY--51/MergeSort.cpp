#include<iostream>
#include<vector>
using namespace std;
void merge(vector<int> &arr,int st ,int mid,int end)
{
     vector<int>temp;
     int i = st , j = mid+1;
     while(i<=mid && j<=end)
     {
        if(arr[i]<=arr[j])
        {
            temp.push_back(arr[i]);
            i++;
        }
        else{
            temp.push_back(arr[j]);
            j++;
        }
     }
     while(i<=mid)
     {
        temp.push_back(arr[i]);
        i++;
     }
      while(j<=mid)
     {
        temp.push_back(arr[j]);
        j++;
     }
     for(int idx = 0;idx<temp.size();idx++)
     {
        arr[idx+st] = temp[idx];
     }
}
void merge_sort(vector<int>&arr,int st,int end)
{
  if(st<end)
  {
    int mid = st+(end-st)/2;
    merge_sort(arr , st ,mid); // left part
    merge_sort(arr , mid+1 ,end); // right part
    merge( arr , st , mid,end);

  }
}
int main()
{
    vector<int>arr = {0,65,32,10,445,20,1,98,4};
    merge_sort(arr , 0 , arr.size()-1);
    for(int i : arr)
    {
        cout<<i <<" ";
        
    }

}