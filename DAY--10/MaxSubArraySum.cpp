#include<iostream>
#include<climits>
using namespace std;
int main()
{
    int maxsum = INT_MIN;
    int n = 5;
    int arr[5] = {1,2,3,4,5};
    for(int start=0;start<n;start++)
    {
        int currentsum = 0;
        for(int end =start;end<n;end++)
        {
           currentsum = currentsum +arr[end];
           maxsum = max(currentsum,maxsum);
            
        }
       
    }
    cout<<"max sum of sub array is = "<<maxsum;
}