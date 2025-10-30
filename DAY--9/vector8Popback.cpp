// how pop back in  a vector
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<char>vec = {1,2,3,5};
   cout<<"size of vector before pop "<<vec.size()<<endl;
   vec.pop_back();
    cout<<"size of vector after pop "<<vec.size()<<endl;
     
    return 0;
}