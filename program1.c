#include <stdio.h>
#define STACK_SIZE 5
int st[10],top,item,top=-1;
void push()
{
    if(top==STACK_SIZE)
    printf("stack overflow\n");
    else
    {
        top++;
        st[top]=item;
    }
}
int pop()
{
    int del_item;
    if(top==-1)
    printf("stack underflow\n");
    else
    {
        del_item=st[top];
        top--;
        retrn del_item;
    }
}       
void display()
{
    int i;
    if(top==-1)
    printf("stack is empty");
    for(i=0;i<=top;i++)
    printf("%d\t",st[i]);
}
void main()
{

}