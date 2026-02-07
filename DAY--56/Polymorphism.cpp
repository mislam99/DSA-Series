// Polymorphism
#include<iostream>
using namespace std;
class Student{
    public:
    string name;

    Student(){
        cout<<"non-parameterized constructor"<<endl;
    }

    Student(string name){
        this->name = name;
        cout<<"parameterized constructor"<<endl;
    }
};
int main(){
    Student S1("islam");
    return 0;
}