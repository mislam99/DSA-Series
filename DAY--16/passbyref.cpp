#include<iostream>
using namespace std;
void change(int &b )  //pass by reference using alias
{
    b = 20;
}
int main()
{
    int a = 10;
    change(a);
    cout<<"inside the main func:"<<a<<endl;
 
} 
