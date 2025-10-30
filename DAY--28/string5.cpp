#include<iostream>
#include<string>  // it is optional
using namespace std;
int main()  // how to loop in string
{
    string str;
    cout<<"enter your string:"<<endl;
    getline(cin,str);
    for(int i=0;i<str.length();i++)
    {
        cout<<str[i]<<" ";
    }
    cout<<endl;
    
    return 0;
}