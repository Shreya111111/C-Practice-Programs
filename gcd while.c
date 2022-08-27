//gcd using while loop
#include <stdio.h>
int main()
{
    int g,h;
    printf("The two integers:");
    scanf("%d %d",&g,&h);
    while(g!=h){
        if(g>h)
            //greatest-smallest or smallest-greatest
            g-=h;
        else
            h-=g;
}
 printf("the gcd is %d",g);
 return 0;
}
