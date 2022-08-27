#include<stdio.h>
int main(){
   int x,y;
   printf("enter x and y values:");
   scanf("%d%d",&x,&y);
   // lets take x as 20 and y as 30
   printf("NAME : SHREYA NALAWADE ; DIV :D2B ; ROLL NO :34\n");
   x=x+y;// x=20+30=50
   y=x-y;//y=50-30=20
   x=x-y;//x=50-20=30
   printf("After swap x=%d and y=%d",x,y);
   return 0;
}
