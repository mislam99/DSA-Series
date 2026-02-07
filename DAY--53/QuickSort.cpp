//Quick sort
#include<iostream>
#include<vector>
using namespace std;

int partition(vector<int> &arr, int st , int end){
    int idx = st-1 , pivot = arr[end];
    for(int j=st;j<end;j++){
        if(arr[j] <= pivot){
            idx++;
            swap(arr[j] , arr[idx]);
        }
    }
    idx++;
    swap(arr[end] , arr[idx]);
    return idx;
}

void quickSort(vector<int> &arr , int st , int end){
    if(st >= end) return;
    int pvtIdx = partition(arr,st,end);
    quickSort(arr, st , pvtIdx-1); // left part
    quickSort(arr, pvtIdx+1 , end); // right part
}

int main(){
    vector<int>arr = {1000,500,20,0,-1};
    quickSort(arr, 0 , arr.size()-1);

    for(int val :arr){
        cout<< val <<" ";
    }
    return 0;
}