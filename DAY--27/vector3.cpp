#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int>vec;
    vec.push_back(1);
    vec.push_back(2); 
    vec.push_back(3);  
    vec.push_back(4); 
    vec.push_back(5); 
    cout<<"size of vector =";
    cout<<vec.size()<<endl;  //3
     cout<<"capacity of vector =";
     cout<<vec.capacity()<<endl;  //4
     cout<<"element of vector before pop back = ";
     for(int i : vec)  
     {
       cout<<i<<" ";
       
     }
     cout<<"element at indx 3 = " <<vec.at(3)<<endl;   // acees element at particular
                                                        //index  
     cout<<vec[4]<<endl;         // another way to access the data                                                      
}