#include<iostream>
using namespace std;
int main()
{
    int result;
    int a,b;
    cout<<"enter the value of a :"<<endl;
    cin>>a;
    cout<<"enter the value of b :"<<endl;
    cin>>b;
    char op;
    cout<<"anter oprator: "<<endl;
    cin>>op;
    switch(op)
    {
        case '+':
        result = a+b;
         cout<<"answer is: "<<endl;
         cout<<result<<endl;
        break;
        case '-':
        result = a-b;
         cout<<result<<endl;
        break;
        case '*':
        result = a*b;
         cout<<result<<endl;
        break;
        case '/':
        result = a/b;
         cout<<result<<endl;
        break;
        case '%':
        result = a%b;
        cout<<result<<endl;
         break;
         case 0:
         exit(0);
        default:
        cout<<"invalid oprator"<<endl;
       
    }
    return 0;

}