#include<stdio.h>
void main (){
   int a,b,c,d;
   printf("Enter the values of a,b,c: \n");
   scanf("%d,%d,%d",&a,&b,&c);
   printf(" NAME : SHREYA NALAWADE ; DIV : D2B ; ROLL NO : 34\n");
   if((a>b)&&(a>c)){//Work with 4 numbers//
      if(a>c){
         printf("%d is the largest",a);
      } else {
         printf("%d is the largest",c);
      }
   } else {
      if(b>c){
         printf("%d is the largest",b);
      } else {
         printf("%d is the largest",c);
      }
   }
}
