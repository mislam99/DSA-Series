
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter any number :"<<endl;
    cin>>n;
    for(int i=0;i<n;i++)
    { 
        char ch = 'A';
        for(int j=0;j<i+1;j++){
            
            cout<<ch<<" ";
            ch = ch+(i-1);
            
        }
        cout<<endl;
    }
    return 0;
}
