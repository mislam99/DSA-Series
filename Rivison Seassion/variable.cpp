// #include<iostream>
// using namespace std;
// int main(){
//     // cout<<"my name is \n md \n islam";
//     // return 0;
//     // this is comment section

//     // variable 

//     int _age = 25;
//     cout<<"my age is : "<<_age<<endl;
//     cout<<sizeof(_age);

// }

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter any number : "<<endl;
//     cin>>n;
//     if(n>=0){
//         cout<<"number is positive "<<endl;
//     }
//     else{
//         cout<<"number is negative "<<endl;
//     }
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter any number :"<<endl;
//     cin>>n;
//     cout<<((n>0 )? "positive" :"negative");
   
// }

// #include<iostream>
// using namespace std;
// bool check_prime(int n){
//     bool isprime = true;
//     for(int i = 2;i<n;i++){
//         if(n%i == 0){
//             isprime = false;
//             break;
//         }
//     }
//     return isprime;
   
// }

// int main(){
//     int n;
//     cout<<"enter any number : "<<endl;
//     cin>>n;
//     bool ans = check_prime(n);
//      if(ans){
//         cout<<"number is prime"<<endl;
//     }
//     else{
//         cout<<"number is not prime"<<endl;
//     }
   
//     return 0;
   
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter any number :"<<endl;
//     cin>>n;
//     int num = 1;
//     for(int i =0;i<=n;i++){
        
//         for(int j =1;j<=n;j++){
//         cout<<num<<" ";
//         num++;
        
//         }
//         cout<<endl;
//     }
// }

// #include<iostream>
// using namespace std;
// int fact(int n){
//     int ans = 1;
//     for(int i =1;i<=n;i++){
//         ans = ans*i;
//     }
//     return ans;
// }
// int main(){
//     int n;
//     cout<<"enter any number :"<<endl;
//     cin>>n;
//     cout<<"factorial is : "<<fact(n)<<endl;
// }

// #include<iostream>
// using namespace std;
// void fibbo(int n){
//     int a = 0;
//     int b = 1;
//     int c;
//     for(int i =0;i<n;i++){
        
//         cout<<a<<" ";
//         c = a+b;
//         a = b;
//         b = c;
//     }
//     // cout<<fib<<endl;
// }
// int main(){
//     int n;
//     cout<<"enter a number :"<<endl;
//     cin>>n;
//     fibbo(n);

// }

// #include<iostream>
// using namespace std;
// int bin(int n){
//     int ans = 0;
//     int pow = 1;
//     while(n!=0){
//         int rem = n%2;
//         n = n/2;
//         ans = ans+(rem*pow);
//         pow  = pow*10;
//     }
//     return ans;
// }
// int main(){
//     int n;
//     cout<<"enter any number :"<<endl;
//     cin>>n;
//     cout<<"binary is : "<<bin(n)<<endl;
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter array size : "<<endl;
//     cin>>n;
//     int arr[n];
//     cout<<"enter aary element :"<<endl;
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     cout<<"array is :"<<endl;
//      cout<<"enter aary element :"<<endl;
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
// }


// we have to find largest and smallest elemet in the array
// md islam

// #include<iostream>
// #include<climits>
// using namespace std;
// int findMax(int arr[],int n){
//     int largest = INT_MAX;
//     for(int i=0;i<n;i++){
//         if(arr[i]<largest){
//             largest = arr[i];
//         }
//     }
//     return largest;
// }
// int main(){
//     int n;
//     cout<<"enter array size :"<<endl;
//     cin>>n;
//     int arr[n];
//     cout<<"enter array element: "<<endl;
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     int ans = findMax(arr,n);
//     cout<<"smallest is : "<<ans<<endl;
// }

//linear search

// #include<iostream>
// using namespace std;
// bool linearSearch(int arr[] , int n , int target){
//     for(int i=0;i<n;i++){
//         if(arr[i] == target){
//             return true;
//         }
//     }
//     return false;
// }
// int main(){
//     int n;
//     cout<<"enter size of array :"<<endl;
//     cin>>n;
//     int arr[n];
//     cout<<"enter array element : "<<endl;
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     int target;
//     cout<<"enter target : "<<endl;
//     cin>>target;
//     bool ans = linearSearch(arr,n,target);
//     if(ans){
//         cout<<"target is found at index"<<endl; 
//     }
//     else{
//         cout<<"target is not found "<<endl; 
//     }
//     return 0;
// }

// reverse an array

// #include<iostream>
// using namespace std;
// void reverseArray(int arr[] , int n){
//     int st = 0;
//     int end = n-1;
//     while(st<end){
//         swap(arr[st] , arr[end]);
//         st++;
//         end--;
        
//     }
//     for(int i=0;i<n;i++){
//         cout<<arr[i] <<" ";
//     }
     
// }
// int main(){
//     int n;
//     cout<<"enter size :"<<endl;
//     cin>>n;
//     int arr[n];
//     cout<<"enter array element :"<<endl;
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     cout<<"after swapping:"<<endl;
//     reverseArray(arr,n);
   

//     return 0;
// }


// vector 

// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     vector<int>vec(5);
//     cout<<"enter vector element : "<<endl;
//     for(int i=0;i<5;i++){
//         cin>>vec[i];
//     }
//     cout<<"vector is : "<<endl;
//     vec.pop_back();
//     for(int val : vec){
//         cout<<val<<" ";
//     }
// }

// print subarray
// #include<iostream>
// #include<climits>
// using namespace std;
// int main(){
//     int n = 5;
//     int maxSum = INT_MIN;
//     int arr[n] = {1,2,3,4,10};
//     for(int st=0;st<n;st++){
//         int currSum = 0;
//         for(int end=st;end<n;end++){
//            currSum += arr[end];
//            maxSum = max(maxSum , currSum);
//         }
        
//     }
//     cout<<"maximum sum of subarray is : "<<maxSum;
//     return 0;
// }

//return pair sum

#include<iostream>
#include<vector>
 using namespace std;
int main(){
    vector<int>vec;
    int n = 5;
int arr[n] = {1,2,5,7,10};
int target = 12;
for(int i=0;i<n;i++){
    for(int j=i+1;j<n;j++){
        if(arr[i]+arr[j] == target){
            vec.push_back(i);
            vec.push_back(j);
        }
    }
}
cout<<vec[0]<<" "<<vec[1];
}



