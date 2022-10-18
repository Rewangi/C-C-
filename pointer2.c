#include<stdio.h>
int main(){
    int* pc,c;
    c=22;
    printf("address of c: %p\n", &c);
    printf("value of c: %d\n\n",c);

    pc=&c;
    printf("address of pointer pc: %p")
}