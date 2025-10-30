#include<iostream>
using namespace std;
void permutation(string str , int indx)
{
    int n = str.size();
    if(indx == n)
    {
        cout<<str<<" ";
        cout<<endl;
        return;
    }
    for(int i= indx;i<n;i++)
    {
        swap(str[indx], str[i]);
        permutation( str ,  indx+1);
       swap(str[indx], str[i]); 
    }
}
int main()
{
    string str = "abc";
    permutation(str,0);
    
}