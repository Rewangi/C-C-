#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node* top=NULL;
void push(int val)
{
    struct node *newnode;
    newnode=malloc(sizeof(struct node));
    newnode->data=val;
    if(top==NULL)
    {
newnode->next=NULL;
    }
    else
    {
        newnode->next=top;
    }
    top=newnode;
    //printf("Node is inserted\n");
}
void pop()
{
    if(top==NULL)
    {
        printf("\n Underflow");
    }
    else
    {
        struct node *temp=top;
        top=top->next;
        free(temp);
    }
}
void display()
{
    if(top==NULL)
    {
        printf("Underflow");
    }
    else
    {
        printf("The stack is\n");
        struct node*temp=top;
        while(temp->next!=NULL)
        {
            printf("%d\n",temp->data);
            temp=temp->next;
        }
        printf("%d\n",temp->data);
    }
}
int main()
{
    push(10);
    push(20);
    push(30);
    push(40);
    pop();
    display();

return 0;
}



