#include<stdio.h>
#include<string.h>
int main(){
    char str[50];
    printf("enter string: ");
    fgets(str, sizeof(str), stdin);
    displayString(str);
    return 0;
}
void displayString(char str[]){
    printf(" string output:");
    puts(str);
}