#include<iostream>
using namespace std;
class Student{
    public:
    string name;
    int age;
    string address;

    Student(string n, int a){
        name = n;
        age = a;
        cout<<"Name : "<<name<<endl;
        cout<<"Age : "<<age<<endl;
    }
    // void display(){
    //     cout<<"Name : "<<name<<endl;
    //     cout<<"Age : "<<age<<endl;
    // }
};

int main(){
    Student s1("islam",20);
    // s1.display();

}