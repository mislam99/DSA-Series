#include<iostream>
using namespace std;
// ---> this is parent class
class Person{
    public:
    string name;
    int age;
};

// ---> this is child class
class Student : public Person{
    public:
    int rollno;
    void getInfo(){
        cout<<"Name : "<<name<<endl;
        cout<<"Age : "<<age<<endl;
        cout<<"Roll_no : "<<rollno<<endl;
    }
};

int main(){
    Student s1;
    s1.name = "Islam";
    s1.age = 21;
    s1.rollno = 230265;
    s1.getInfo();
    return 0;
}