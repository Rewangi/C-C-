#include<iostream>
using namespace std;

class employee{
    char name[30];

    public:
    int em_id;
    employee(int b){
        em_id = b;
        em_id++;
        cout<<em_id<<endl;
        cout<<" default constructor called--->";


    }

};

int main(){
    const employee a(5);
    a.em_id++;
    return 0;
}