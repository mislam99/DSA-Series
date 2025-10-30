
#include<iostream>
using namespace std;
int main()
{
    bool isPrime = true;
   int num;
   cout<<"enter a number :"<<endl;
   cin>>num;
   for(int i=2;i<num-1;i++){
    if(num % i ==0){
        isPrime = false;
        break;
    }
   }
   if(isPrime == true){
    cout<<"number is prime :"<<endl;
    
   }
   else{
        cout<<"number is not prime :"<<endl;
    }
   
    return 0;
}