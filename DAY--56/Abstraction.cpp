#include<iostream>
using namespace std;
class Shape{
    virtual void drow() = 0;
};
class Circle : public Shape{
    public:
    void drow(){
        cout<<"drow a circle: \n";
    }
};

int main(){
    Circle C1;
    C1.drow();
    return 0;
}