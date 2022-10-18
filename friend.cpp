/*#include<iostream>
using namespace std;
class Distance {
    private:
    int meter;
    //friend func
    friend int addfive(Distance);
    
    public:
    Distance() : meter(0) {}
};

//func defination
int addfive(Distance d){
    //acc private mem

    d.meter += 5;
    return d.meter;
}

int main(){
    Distance D;
    cout<<"Distance: "<< addfive(D);
    return 0;
}*/

// Adding members of two diffrent classs

/*#include <iostream>
using namespace std;

// forward declaration
class ClassB;

class ClassA {
    
    public:
        // constructor to initialize numA to 12
        ClassA() : numA(12) {}
        
    private:
        int numA;
        
         // friend function declaration
         friend int add(ClassA, ClassB);
};

class ClassB {

    public:
        ClassB() : numB(1) {}
    
    private:
        int numB;
        friend int add(ClassA, ClassB);
};
int add(ClassA objectA, ClassB objectB) {
    return (objectA.numA + objectB.numB);
}

int main() {
    ClassA objectA;
    ClassB objectB;
    cout << "Sum: " << add(objectA, objectB);
    return 0;
}*/

/*#include <iostream>
using namespace std;
class ClassB;
class ClassA {
    private:
        int numA;
        friend class ClassB;
    public:
        ClassA() : numA(150) {}
};
class ClassB {
    private:
        int numB;
    public:
        ClassB() : numB(50) {}
    int add() {
        ClassA objectA;
        return objectA.numA + numB;
    }
};
int main() {
    ClassB objectB;
    cout << "Sum: " << objectB.add();
    return 0;
}*/

#include<iostream>
using namespace std;

class A{
    friend class B;
    int a;

};

class B { };
class C : public B{
    void f(A* p){
      //  p->a=2;

    }
};

int main(){
    

    return 0;
}



