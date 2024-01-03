/*#include <stdio.h>
#include<process.h>
#define MAX 10
int stack[MAX], top = -1;
void push(int stack[], int val);
void display(int stack[]);
void main()
{
int val, choice;
clrscr();
while(1)
{
printf("\n 1. PUSH");
printf("\n 2. DISPLAY");
printf("\n 3. EXIT");
printf("\n Enter your option : ");
scanf("%d", &choice);
switch(choice)
{
case 1:
printf("\n Enter the number to be pushed on stack : ");
scanf("%d",&val);
push(stack, val);
break;
case 2:
display(stack);
break;
case 3:
exit();
default:
printf("invalid option");
}
}
}
void push(int stack[], int val)
{
if(top == MAX-1)
{
printf("\n STACK OVERFLOW");
}
else {
top++;
stack[top] = val;
}
}
void display(int stack[])
{
int i;
if(top == -1)
printf("\n STACK IS EMPTY");
else {
for(i = top;i >= 0;i--)
printf("\n%d",stack[i]);
}
}*/
#include <stdio.h>
#define MAX 10
int stack[MAX], top = -1;
void push(int stack[], int val);
void display(int stack[]);
void main()
{
int val, choice;
clrscr();
while(1)
{
printf("\n 1. PUSH");
printf("\n 2. DISPLAY");
printf("\n 3. EXIT");
printf("\n Enter your option : ");
scanf("%d", &choice);
switch(choice)
{
case 1:
printf("\n Enter the number to be pushed on stack : ");
scanf("%d",&val);
push(stack, val);
break;
case 2:
display(stack);
break;
case 3:
exit();
default:
printf("invalid option");
}
}
}
void push(int stack[], int val)
{
if(top == MAX-1)
{
printf("\n STACK OVERFLOW");
}
else {
top++;
stack[top] = val;
}
}
void display(int stack[])
{
int i;
if(top == -1)
printf("\n STACK IS EMPTY");
else {
for(i = top;i >= 0;i--)
printf("\n%d",stack[i]);
}
}