#include<iostream>
using namespace std;

class base{
    public:
    virtual void display(){
        cout<<"display of base"<<endl;
    }

};
class base2{
    public:
    void display(){
        cout<<"display of base 2"<<endl;
    }
};
class derived:public base2{
public:
void display(){
    cout<<"display of derived"<<endl;


}

};
class derived2: public base{
    public:
    void display(){
        cout<<"display"<<endl;
    }

};

int main(){
    base2 *p = new derived();
    p->display();
    base *q = new derived2();
    q->display();
}