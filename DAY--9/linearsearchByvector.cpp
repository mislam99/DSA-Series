// linearsearch by vector
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int>a = {1,2,3,4,5,6,7,8,9,10};
    int target;
    cout<<"enter target= "<<endl;
    cin>>target;
    for(int i:a)
    {
       if(a[i]==target)
       {
        return 1;
       }
       else
       {
        return 0;
       }
    }
}