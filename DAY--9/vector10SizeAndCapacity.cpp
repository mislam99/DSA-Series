// how to check size VS capacity of  a vector
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<char>vec;
    vec.push_back(0);
    vec.push_back(1);
    vec.push_back(3);
    vec.push_back(10);
    vec.push_back(11);
    cout<<vec.size()<<endl;     //-->3
    cout<<vec.capacity()<<endl;   //-->8

   
    return 0;
}