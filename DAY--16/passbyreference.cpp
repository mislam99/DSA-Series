#include<iostream>
using namespace std;
void change(int* ptr )  //pass by reference
{
    *ptr = 20;
}
int main()
{
    int a = 10;
    change(&a);
    cout<<"inside the main func:"<<a<<endl;
 
} 
