#include<iostream>
#include<vector>
using namespace std;
vector<int> pairsum(vector<int> nums,int target)
{
    vector<int>ans;
    int n = nums.size();
    int s=0;
    int e=n-1;
    while(s<e)
    { int ps = nums[s]+nums[e];  //  ----->pair sum
      
      if(ps>target)
      {
        e--;
      }
      if(ps<target)
      {
        s++;
      }
      else{

   
      ans.push_back(s);
      ans.push_back(e);
      return ans;
      }
    }
}
int main()
{
    vector<int>nums = {2,7,11,15};
    int target = 22;
     vector<int>ans =pairsum(nums,target);
     cout<<ans[0]<<" "<<ans[1];

}