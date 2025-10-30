#include<iostream>
using namespace std;
int find(int arr[],int target)
{
    for(int i=0;i<5;i++)
    {
        if(arr[i] == target){
            return 1;
        }
    }
    return 0;
}
int main()
{
    int arr[5];
   
    cout<<"enter aray element :"<<endl;
    for(int i=0;i<5;i++)
    {
        cin>>arr[i];
    }
     int target;
    cout<<"enter your target :"<<endl;
    cin>>target;
    bool ans = find(arr,target);
    if(ans){
          cout<<"target is found :"<<endl;
    }
    else{
        cout<<"target is not found :"<<endl;
    }
}