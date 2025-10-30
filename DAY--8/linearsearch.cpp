#include<iostream>
using namespace std;
bool search(int arr[],int n,int target)
{
    
    for(int i=0;i<n;i++)
    {
        if(arr[i]==target){
        return 1;
        }
    }
    return 0;

}
int main()
{
    int n;
    cout<<"enter array size "<<endl;
    cin>>n;
    int arr[50];
    cout<<"enter array element "<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int target;
    cout<<"enter your target "<<endl;
    cin>>target;
    bool found = search(arr,n,target);
   
    if(found)
    {
        cout<<"element is found"<<endl;
    }
    else{
         cout<<"element is not found"<<endl;
    }
    


}