
// Function

// #include<iostream>
// using namespace std;
// int print_sum(int a, int b)
// {
//    int sum;
//    sum = a+b;
//    return sum;
// }
// int main()
// {
//    int a;
//    int b;
//    cout<<"enter num1 :"<<endl;
//    cin>>a;
//    cout<<"enter num2 :"<<endl;
//    cin>>b;
//    int ans = print_sum(a,b);
//    cout<<"sum of a and b is : "<<ans<<endl;
//     return 0;
// }


// minimum of two number

// #include<iostream>
// using namespace std;
// void min(int a ,int b)
// {
//     if(a>b){
//         cout<<"b is minimum : "<<b<<endl;
//     }
//     else{
//          cout<<"a is  minimum  : "<<a<<endl;
//     }

// }
// int main()
// {
//     int a;
//     cout<<"enter num1 : "<<endl;
//     cin>>a;
//     int b;
//     cout<<"enter num2 : "<<endl;
//     cin>>b;
//     min(a,b);
//     return 0;
// }


// Sum of number from 1 to n;

// #include<iostream>
// using namespace std;
// int sumOf_number(int n)
// {
//     int sum =0;
//     for(int i=1;i<=n;i++)
//     {
//         sum = sum +i;
//     }
//     return sum;
// }
// int main()
// {
//     int n;
//     cout<<"enter any numnber : "<<endl;
//     cin>>n;
//     int ans = sumOf_number(n);
//     cout<<"of number from one to n is : "<<ans;
//     return 0;
// }


// N factorial

// #include<iostream>
// using namespace std;
// long factorial(int n)
// {
//     long fact = 1;
//     for(int i=1;i<=n;i++)
//     {
//         fact = fact*i;
//     }
//     return fact;
// }
// int main()
// {
//     int n;
//     cout<<"enter any number : "<<endl;  // 2,432,902,008,176,640,000
//     cin>>n;
//     int ans = factorial(n);
//     cout<<"factoril of given number is : "<<ans;
//     return 0;
// }


// Calculate sum of digits of a number

// #include<iostream>
// using namespace std;
// int find_sum(int n)
// {
//      int sum = 0;
//     while(n != 0)
//     {
//         int rem = n%10;
//         sum = sum+rem;
//         n = n/10;
//     }
//     return sum;
// }
// int main()
// {
//     int n;
//     cout<<"enter a number : "<<endl;
//     cin>>n;
//     cout<<"sum is : "<<find_sum(n)<<endl;
//     return 0;
// }


// Binomial factorial 

// #include<iostream>
// using namespace std;
// int factorial(int n)
// {
//     int fact = 1;
//     for(int i=1;i<=n;i++)
//     {
//         fact = fact *i;
//     }
//     return fact;
// }
// int main()
// {
//     int n;
//     cout<<"enter the value of n : "<<endl;
//     cin>>n;
//      int r;
//     cout<<"enter the value of r : "<<endl;
//     cin>>r;
//     int ans1 = factorial(n);
//     int ans2 = factorial(r);
//     int ans3 = factorial(n-r);
//     int final_ans = ans1/(ans2*ans3);
//     cout<<"binomial factorial is : "<<final_ans<<endl;

//     return 0;
// }


// check a number  is prime or nt


// #include<iostream>
// using namespace std;
// bool Prime(int n)
// {
//     bool isPrime = true;
//     for(int i=2;i<n;i++)
//     {
//         if(n%i == 0)
//         {
//             isPrime = false;
//             break;
//         }
//     } 
// }
// int main()
// {
//     int n;
//     cout<<"enter  a number : "<<endl;
//     cin>>n;
//     bool ans = Prime(n);
//     if(ans){
//         cout<<"number is prime "<<endl;
//     }
//     else{
//          cout<<"number is not prime "<<endl;
//     }
   
//   return 0;
// }


// print all prime number from 2 to n

#include<iostream>
using namespace std;
int prime(int n)
{
    if(n<=1 )
    {
        return false;
    }
    for(int i=2;i<n;i++)
    {
        if(n %i == 0){
           return false;
        }
       
    }
    return true;
}
void print(int n)
{
    
   
        for(int i=2;i<n;i++)
        {
           if(prime(i)){
             cout<<i<<endl;
           }
        }
    
}
int main()
{
    int n;
    cout<<"enter a number : "<<endl;
    cin>>n;
    print(n);
    
    return 0;
}