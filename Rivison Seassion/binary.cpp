
// decimal to binary cinversion

// #include<iostream>
// using namespace std;
// int binary(int n)
// {
//     int pow = 1;
//     int ans =0;
//     while(n != 0){
//         int rem = n % 2;
//         ans = ans+ (rem*pow);
//         pow = pow*10;
//         n = n/2;
//     }
//     return ans;
// }
// int main()
// {
//     int n;
//     cout<<"enter any number : "<<endl;
//     cin>>n;
//     for(int i=1;i<=10;i++)
//     {
//         cout<<binary(i)<<endl;
//     }
// }


// bianry to decimal cinversion

#include<iostream>
using namespace std;
int decimal(int n)
{
    int pow = 1;
    int ans =0;
    while(n != 0){
        int rem = n % 10;
        ans = ans+ (rem*pow);
        pow = pow*2;
        n = n/10;
    }
    return ans;
}
int main()
{
    int n;
    cout<<"enter any number : "<<endl;
    cin>>n;
    cout<<"decimal number is : "<<decimal(n)<<endl;
}