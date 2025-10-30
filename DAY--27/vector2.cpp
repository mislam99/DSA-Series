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
     for(int i : vec)   // this loop is called for each loop
     {               // print the vector
       cout<<i<<" ";
       
     }
     cout<<endl;
     vec.pop_back();  // it is used to delete the elment
                        //   at the end from the vector
      cout<<"element of vector after pop back = ";
     for(int i : vec)   
     {              
       cout<<i<<" ";
       
     }
     
    
}