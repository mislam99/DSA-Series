#include<iostream>
using namespace std;
void intersection(int arr1[],int arr2[],int n1,int n2)
{
    for(int i=0;i<n1;i++)
    {
        for(int j=0;j<n2;j++)
        {
            if(arr1[i]==arr2[j])
            {
                cout<<arr1[i]<<" ";
            }
        }
    }
}
int main()
{
   int n1,n2;
   cout<<"enter size of first array:"<<endl;
   cin>>n1;
   cout<<"enter size of second array:"<<endl;
   cin>>n2;
   int arr1[n1];
   cout<<"enter elements of first array: "<<endl;
   for(int i=0;i<n1;i++)
   {
    cin>>arr1[i];
   }
   int arr2[n2];
   cout<<"enter elements of second array: "<<endl;
   for(int i=0;i<n2;i++)
   {
    cin>>arr2[i];
   }
   intersection(arr1,arr2,n1,n2);
}