#include<iostream>
using namespace std;

namespace add{
    int x;
    int y;
    void operation(){
        cin>>x>>y;
        cout<< x+y<<endl;
    }
}

namespace sub{
    int x, y;
    void operation(){
        cin>>x>>y;
        cout<<x-y<<endl;
    }
}

namespace mul{
    int x,y;
    void operation(){
        cin>>x>>y;
        cout<<x*y;
    }
}

int main(){
    add::operation();
    sub::operation();
   mul::operation();
}