// print all the subset of a array using recursion
#include<iostream>
#include<vector>
using namespace std;
void printsubset(vector<int>&arr, vector<int>&ans,int i)
{
    if(i == ans.size())  // base case
    {
      for(int val : ans)
      {
        cout<<val<<" ";
      }
      cout<<endl;
      return;
    }
    ans.push_back(arr[i]); // for include
    printsubset(arr,ans,i+1);
    ans.pop_back();
     printsubset(arr,ans,i+1);
}
int main()
{
    vector<int>arr = {1,2,3};
    vector<int>ans;  //for store the subset
      printsubset(arr,ans,0);

}
