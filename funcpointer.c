#include<stdio.h>
#include<stdlib.h>
int addition();
int subtraction();
int main(){
    int result;
    int(*ptr)();
    ptr = &addition;
     result = (*ptr)();
    printf("The sum is %d\n", result);
    ptr = &subtraction;
    result = (*ptr)();
    printf("The substraction is %d\n", result);
}
int addition()
{
    int a , b;
    printf("enter two numbers: ");
    scanf("%d %d",&a,&b);
    return a+b;
}
int subtraction(){
    int a , b;
    printf("enter two numbers: ");
    scanf("%d %d",&a,&b);
    return a-b;
}