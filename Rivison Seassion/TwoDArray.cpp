// 2D array
// #include<iostream>
// using namespace std;
// int main(){
//     int rows = 4;
//     int cols = 3;
//     // int arr[4][3] = {{1,2,3},{4,5,6},{7,8,9},{10,11,12}};

//     int arr[rows][cols];
//     cout<<"Enter matrix element : "<<endl;
//     for(int i=0;i<rows;i++){
//         for(int j=0;j<cols;j++){
//             cin>>arr[i][j];
//         }
//     }

//       cout<<"Your matrix is : "<<endl;
//     for(int i=0;i<rows;i++){
//         for(int j=0;j<cols;j++){
//             cout<<arr[i][j] <<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }

//Linear Search in 2D array
// #include<iostream>
// #include<utility>
// using namespace std;
// pair<int, int> linearSearch(int arr[4][3],int target){
//     for(int i=0;i<4;i++){
//         for(int j=0;j<3;j++){
//             if(arr[i][j] == target){
//                 return {i,j};
//             }
//         }
       
//     }
//     return {-1,-1};
// }
// int main(){
//     int rows = 4;
//     int cols = 3;
//     int arr[4][3] = {{1,2,3},{4,5,6},{7,8,9},{10,11,12}};

    // int arr[rows][cols];
    // cout<<"Enter matrix element : "<<endl;
    // for(int i=0;i<rows;i++){
    //     for(int j=0;j<cols;j++){
    //         cin>>arr[i][j];
    //     }
    // }

//     int target;
//     cout<<"Enter your target :" <<endl;
//     cin>>target;
//     pair<int,int>result = linearSearch(arr,target);
//     if(result.first != -1){
//         cout<<"at row : "<<result.first<<endl
//         <<"at col : "<<result.second<<endl;
//     }else{
//         cout<<"taget is not fount:"<<endl;
//     }
   

//     return 0;
// }

// Max row sum of 2D matrix
#include<iostream>
#include <climits>
using namespace std;
int maxSum(int arr[3][3]){
    int maxsum = INT_MIN;
    for(int i=0;i<3;i++){
        int ithsum = 0;
        for(int j = 0;j<3;j++){
            ithsum += arr[i][j];
        }
        maxsum = max(maxsum , ithsum);
    }
    
    return maxsum;
}
int main(){
    
    int arr[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    cout<<maxSum(arr);

    return 0;
}