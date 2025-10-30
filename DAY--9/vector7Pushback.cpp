// how to push_back in vector
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<char>vec;
cout<<"size of vector is befor push back "<<vec.size()<<endl;
   vec.push_back(20);
 cout<<"size of vector is bafter push back "<<vec.size()<<endl;
   cout<<vec[0]; 
    return 0;
}