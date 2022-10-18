#include<iostream>
using namespace std;
class Base{
    public:
    float salary = 900;

};

class Derived : protected Base {
    public:
    float bonus = 100;
    void sum(){
        cout<<"your total salary is :"<<(salary+bonus);
    }
};
class base2: public Derived{
    public:
    int no = 30;
    void sum(){
        cout<<"salary is :"<< salary;
    }

};

int main(){
    Derived x;
    //cout<< " salary is:"<<x.salary<<endl;
    cout<<"bonus is:"<<x.bonus<<endl;
    x.sum();
    base2 y;

    return 0;
}