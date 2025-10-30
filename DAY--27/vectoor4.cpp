#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int>vec = {1,2,3,4,5};
    vec.erase(vec.begin());  //  used to delte the elemet
    for(int i:vec)
    {
        cout<<i<<" ";
    }
    
     
    
}