#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<malloc.h>
struct stack
{
 int data;
 struct stack *next;
};
struct stack *top=NULL;
struct stack *push(struct stack *,int);
struct stack *pop(struct stack *);
int peek(struct stack *);
struct stack *display(struct stack *);
int main()
{
 int option,num;
 do
 {
 printf("\n ***Main menu*** ");
 printf("\n 1.PUSH");
 printf("\n 2.POP");
 printf("\n 3.PEEK");
 printf("\n 4.DISPLAY");
 printf("\n 5.EXIT");
 printf("\n\n Enter your option:");
 scanf("%d",&option);
 switch(option){
 case 1:
 printf("Enter the data:");
 scanf("%d",&num);
 top=push(top,num);
 break;
 case 2:
 top=pop(top);
 break;
 case 3:
 num=peek(top);
 if(num!=-1){
 printf("\n The value at the top of the stack is:%d",num);
 }
 else{
 printf("\n Stack is empty");
 }
 break;
 case 4:
 top = display(top);
 break;
 }
 }while(option!=5);
 return 0;
}
struct stack *push(struct stack *top,int num){
 struct stack *ptr;
 ptr=(struct stack*)malloc(sizeof(struct stack));
 ptr->data=num;
 if(top==NULL){
 ptr->next = NULL;
 top=ptr;
 }
 else{
 ptr->next=top;
 top=ptr;
 }
 return top;
}
struct stack *pop(struct stack *top){
 struct stack *ptr;
 ptr =top;
 if(top==NULL){
 printf("Overflow");
 }
 else{
 top=top->next;
 printf("The value deleted is :%d",ptr->data);
 free(ptr);
 }
 return top;
}
struct stack *display(struct stack *top){
 struct stack *ptr;
 ptr=top;
 if(top==NULL){
 printf("The stack is empty");
 }
 else{
 while(ptr!=NULL){
 printf("\n%d",ptr->data);
 ptr=ptr->next;
 }
 }
 return top;
}
int peek(struct stack *top){
 if(top==NULL){
 printf("Stack is empty");
 return -1;
 }
 else{
 return top->data;
 }
}
