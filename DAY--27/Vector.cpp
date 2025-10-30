#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int>vec;
    vec.push_back(1);
    vec.push_back(2); 
    vec.push_back(3);  
    cout<<"size of vector =";
    cout<<vec.size()<<endl;  //3
     cout<<"capacity of vector =";
     cout<<vec.capacity()<<endl;  //4
     for(int i : vec)   // this loop is called for each loop
     {               // print the vector
       cout<<i<<" ";
       
     }
     
    
}