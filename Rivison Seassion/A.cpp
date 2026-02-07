#include<iostream>
using namespace std;
int main()
{
    int result;
    int a;
    cout<<"enter num1 : "<<endl;
    cin>>a;
    int b;
    cout<<"enter num2 : "<<endl;
    cin>>b;
    char op;
    cout<<"enter any operator : "<<endl;
    cin>>op;
    switch(op)
    {
        case '+':
        result = a+b;
        cout<<"sum is : "<<result<<endl;
        break;
        case '-':
        result = a-b;
        cout<<result<<endl;
        break;
        case '*':
        result = a*b;
        cout<<result<<endl;
        break;
        case '0':
        exit(0);
        default:
        cout<<"invalid operator "<<endl;

    }
    return 0;
}