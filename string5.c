#include<stdio.h>
#include<string.h>
int main(){
char name[] = "Harry Potter" ;

printf("%c", *name);
printf("%c", *(name+1));
printf("%c", *(name+7));

char *namePtr;

namePtr = name;
printf("%c", *namePtr);
printf("%c", *(namePtr+1));
printf("%c", *(namePtr+7));

}

