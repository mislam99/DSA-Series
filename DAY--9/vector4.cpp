// how to use loop in a vector
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int>vec(5,2);
    for(int i:vec)
    {
        cout<<i<<endl;
    }
   
     
    return 0;
}