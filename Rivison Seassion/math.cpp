// To check a number is prime or not
// #include<iostream>
// using namespace std;
// bool isPrime(int n){
//     bool isPrime = true;
//     for(int i = 2;i*i<=n;i++){
//         if(n%i == 0){
//             isPrime = false;
//             return false;
//         }
//     }
//     return true;
// }
// int main(){
//     int n = 10;
//     cout<<"Enter any number : "<<endl;
//     cin>>n;
    
//     if(isPrime(n)){
//         cout<<"number is prime : " <<n<<endl;
//     }
//     else{
//         cout<<"number is not prime : " <<n<<endl;
//     }
//     return 0;
// }

// pritn digit if any number
// #include<iostream>
// using namespace std;
// void print(int n){
//     int count = 0;
//     while(n != 0){
//         int rem = n % 10;
//         n = n / 10;
//         count++;
//     }
//     cout<<"total digit in given number is : "<<count<<endl;
// }
// int main(){
//     int n;
//     cout<<"Enter any number : "<<endl;
//     cin>>n;
//     print(n);
//     return 0;
// }

// Armstrong
// #include<iostream>
// using namespace std;
// int Armstrong(int n){
//     int arm = 0;
//     while(n != 0){
//         int rem = n%10;
//         arm = arm+(rem*rem*rem);
//         n = n/10;
//     }
//     return arm;
// }
// int main(){
//     int n;
//     cout<<"Enter any number : "<<endl;
//     cin>>n;
//     int ans = Armstrong(n);
//     if( ans == n){
//         cout<<"yes num is armstrong : "<<endl;
//     }
//     else{
//         cout<<"not num is not armstrong : "<<endl;
//     }
//     return 0;
// }