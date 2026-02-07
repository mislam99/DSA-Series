#include<iostream>
using namespace std;
class Account{
    private:
    double balance;
    string password;

    public:
    string accountId;
    string username;
};
int main(){
    Account A1;
    A1.username = "Md islam";
    cout<<A1.username;
    return 0;
}