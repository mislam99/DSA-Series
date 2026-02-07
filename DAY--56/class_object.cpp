// OOPS --> Object orinted programming
// class and object

#include<iostream>
#include<string>
using namespace std;

class Teacher{
    // properties or attributes
    private:
    double salary;

    public:
    string name;
    string dept;
    string subject;
    

    // method
    void chaneDepr(string newDept){
        dept = newDept;
    }

    // getter function
    void setSalary(double s){
        salary = s;
    }

    //setter function
    double getSalary(){
        return salary;
    }

};

int main(){
    // Object
    Teacher t1; 

    //values of object
    t1.name = "Islam";
    t1.dept = "CSE";
    t1.subject = "C++";
    // t1.salary = 30000;
    t1.setSalary(250000);
    cout<<t1.getSalary()<<endl;
    return 0;
    
}