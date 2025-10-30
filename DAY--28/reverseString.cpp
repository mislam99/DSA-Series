#include<iostream>
#include<string>  
#include <bits/stdc++.h> 
using namespace std;
int main()
{
    string str;
    cout<<"enter any string:"<<endl;
    getline(cin,str);
   reverse(str.begin() , str.end());
    
    cout<<"reverse string is :"<<str<<endl;
    
    return 0;
}