#include<iostream>
using namespace std;
void insertion(int arr[],int n){
    for(int i=1;i<n;i++){
        int curr = arr[i];
        int prev = i-1;
        while(prev>=0 && arr[prev]>curr){
            arr[prev+1] = arr[prev];
            prev--;
        }
         arr[prev+1] = curr;
    }
    for(int i=0;i<n;i++){
        cout<<arr[i] <<" ";
    }
}
int main()
{   
    int n = 5;
    int arr[n] = {20,30,51,85,65};
    insertion(arr,n);
}