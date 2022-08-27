#include<stdio.h>

int main()
{
  int number;

  printf(" Enter an int value to check  \n");
  scanf("%d", &number);
  printf("NAME : SHREYA NALAWADE ; DIV : D2B ; ROLL NO: 34\n");

  if ( number%2 == 0 ) //Check whether remainder is 0 or not
     printf("Given number %d is EVEN NUMBER \n", number);

  else
    printf("Given number %d is ODD NUMBER \n", number);

  return 0;
}
