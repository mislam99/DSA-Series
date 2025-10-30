#include<iostream>
using namespace std;
int digitSum(int num){
    int sum = 0;
    while(num != 0){
        int rem = num%10;
        sum = sum + rem;
        num =  num/10;
    }
    return sum;
}
int main(){
    int n ;
    cout<<"enter any number :"<<endl;
    cin>>n;
    int ans = digitSum(n);
    cout<<"sum of digit is  : "<<ans<<endl;
}

