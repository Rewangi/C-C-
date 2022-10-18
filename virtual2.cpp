#include<iostream>
using namespace std;

class car{
    public:
    void car1(){
    
        cout<<"car1"<<endl;
    }
    virtual void start() = 0;
    virtual void stop()  = 0;
};

class bmw: public car{

    public:
    void start(){
        cout<<"bmw started"<<endl;
    }

    void stop(){
        cout<<"bmw stopped"<<endl;
    }
};
class swift:public car{
     public:
    void start()
    {
        cout<<"swift started"<<endl;
    }
    void stop(){
        cout<<"swift stop"<<endl;
    }
};
int main()
 {
    car *c = new bmw();
    c->start();
    c->stop();
    c->car1();
    c=new swift();
    c->start();
    c->stop();
    return 0;
 }
