#include<iostream>
#include<string>  // it is optional
using namespace std;
int main() // how to get input in stirng
{
    string str;
    cout<<"enter any string:"<<endl;
    getline(cin,str);

    cout<<"your output is : "<<str<<endl;
    
    return 0;
}