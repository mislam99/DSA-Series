#include<iostream>
#include<vector>
using namespace std;
void reverse(vector<int>& vec)
{
    int start = 0;
    int end = 5;
    while(start<end)
    {
        swap(vec[start],vec[end]);
        start++;
        end--;
    }
}
int main()
{
    vector<int>vec = {1,2,3,4,5,6};
    reverse(vec);
    cout<<" reverse array is "<<endl;
    for(int i:vec)
    {
        cout<<i<<endl;
    }


}