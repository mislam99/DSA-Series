// to input and access them in array

// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout<<"enter the size of array :"<<endl;
//     cin>>n;
//     int arr[n];
//     cout<<"enter array element : "<<endl;
//     for(int i=0;i<n;i++)
//     {
//         cin>>arr[i];
//     }
//     cout<<"your input element is :"<<endl;
//     for(int i=0;i<n;i++)
//     {
//         cout<<arr[i]<<endl;
//     }
//     return 0;

// }


// to find maximum and minimum element index


// #include<iostream>
// #include<climits>
// using namespace std;
// int smallest(int arr[],int n)
// {
    
//     int smallest = INT_MAX;
//     int min_index = 0;
//     for(int i=0;i<n;i++)
//     {
//         if(arr[i] < smallest)
//         {
//             smallest = arr[i];
//             min_index = i;
           
//         }
//     }
//      return  min_index;
// }
// int largest(int n, int arr[])
// {
//     int largest_index = 0;
//     int largest = INT_MIN;
//     for(int i=0;i<n;i++)
//     {
//         if(arr[i]>largest)
//         {
//             largest = arr[i];
//             largest_index = i;
//         }
//     }
//     return largest_index;
// }
// int main()
// {
//     int n;
//     cout<<"enter the size of array :"<<endl;
//     cin>>n;
//     int arr[n];
//     cout<<"enter array element : "<<endl;
//     for(int i=0;i<n;i++)
//     {
//         cin>>arr[i];
//     }
//     int ans = smallest(arr,n);
//     cout<<"the smallest element at index :  "<<ans<<endl;
//     int p = largest(n,arr);
//     cout<<" largest elment is at index :  "<<p;
//     return 0;
// }

// linear search

// #include<iostream>
// using namespace std;
// bool linear_search(int arr[], int n, int target)
// {
//     for(int i=0;i<n;i++)
//     {
//         if(arr[i] == target)
//         {
//             return 1;
            
//         }
        
//     }
//     return 0;
// }
// int main()
// {
//     int n;
//     cout<<"enter an array  size : "<<endl;
//     cin>>n;
//     int arr[n];
//     cout<<"enter an array  element : "<<endl;
//     for(int i=0;i<n;i++)
//     {
//         cin>>arr[i];
//     }
//     int target;
//     cout<<"enter your target : "<<endl;
//     cin>>target;
//     bool ans = linear_search(arr,n,target);
//     if(ans){
//         cout<<"yes target is found: "<<endl;
//     }
//     else{
//         cout<<"not target is not found: "<<endl;
//     }
//     return 0;
// }


// reverse an array

// #include<iostream>
// using namespace std;
// int reverse(int arr[] , int n)
// {
//     int st = 0;
//     int end = n-1;
//     int mid = (st+end)/2;
//     while(st <= end)
//     {
//         swap(arr[st],arr[end]);
//         st = st+1;
//         end = end-1;
//     }
//     for(int i=0;i<n;i++)
//     {
//         cout<<arr[i]<<" ";
//     }
// }
// int main()
// {
//     int n;
//     cout<<"enter array size: "<<endl;
//     cin>>n;
//      int arr[n];
//     cout<<"enter an array  element : "<<endl;
//     for(int i=0;i<n;i++)
//     {
//         cin>>arr[i];
//     }
//     reverse(arr,n);
// }

// sum and product of all number in a array

// #include<iostream>
// using namespace std;
// int product(int arr[],int n)
// {
//     int product = 1;
//     for(int i=0;i<n;i++)
//     {
//         product = arr[i]*product;
//     }
//     return product;
// }
// int sum(int arr[],int n)
// {
//     int sum = 0;
//     for(int i=0;i<n;i++)
//     {
//         sum = arr[i]+sum;
//     }
//     return sum;
// }

// int main()
// {
//     int n;
//     cout<<"enter the array size : "<<endl;
//     cin>>n;
//     int arr[n];
//     cout<<"enter array element : "<<endl;
//     for(int i=0;i<n;i++)
//     {
//         cin>>arr[i];
//     }
//     int prodt = product(arr,n);
//     cout<<"product of all number is :"<<prodt<<endl;
//     int sm = sum(arr,n);
//     cout<<"sum of all number is :"<<sm<<endl;
// }

// swap max and min element of an array

// #include<iostream>
// #include<climits>
// using namespace std;
// int max(int arr[],int n)
// {
//     int max = INT_MIN;
//     int maxidx = -1;
//     for(int i=0;i<n;i++)
//     {
//         if(arr[i]>max)
//         {
//             max = arr[i];
//             maxidx = i;
//         }
//     }
//     return maxidx;
// }
// int min(int arr[],int n)
// {
//     int min = INT_MAX;
//     int minidx = -1;
//     for(int i=0;i<n;i++)
//     {
//         if(arr[i]<min)
//         {
//             min = arr[i];
//             minidx = i;
//         }
//     }
//     return minidx;
// }
// void swap(int arr[],int n)
// {
//     int ans1 =  max(arr,n);
//    int ans2 =  min(arr,n);

//    int temp = arr[ans1];
//    arr[ans1] = arr[ans2];
//     arr[ans2] = temp ;
    
//      for(int i=0;i<n;i++)
//     {
//         cout<<arr[i]<<" ";
        
//     }
// }
// int main()
// {
//     int n;
//     cout<<"enter the array size : "<<endl;
//     cin>>n;
//     int arr[n];
//     cout<<"enter array element : "<<endl;
//     for(int i=0;i<n;i++)
//     {
//         cin>>arr[i];
//     }
  
//    swap(arr,n);

// }

// print all unique value in a array


// #include<iostream>
// using namespace std;
// void unique(int arr[],int n)
// {
//     for(int i=0;i<n;i++)
//     {
//         bool isUnique = true;
//         for(int j=0;j<n;j++)
//         {
//             if(i != j && arr[i] == arr[j])
//             {
//                 isUnique = false;
//                 break;
//             }
//         }
//         if(isUnique){
//              cout<<arr[i]<<" ";
            
//         }
         
//     }
// }
// int main()
// {
//     int n;
//     cout<<"enter the array size : "<<endl;
//     cin>>n;
//     int arr[n];
//     cout<<"enter array element : "<<endl;
//     for(int i=0;i<n;i++)
//     {
//         cin>>arr[i];
//     }
//     unique(arr,n);
// }



