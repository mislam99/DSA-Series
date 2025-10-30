// how to use loop in a vector and
// how to store charector in vector
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<char>vec = {'a','b','c','d','e'};
    for(char i:vec)
    {
        cout<<i<<endl;
    }
   
     
    return 0;
}