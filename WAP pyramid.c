
#include <stdio.h>
int main()
{
  int Rows, i, j, k = 0;

  printf("Please Enter the Number of Rows:  ");
  scanf("%d", &Rows);
  printf("NAME : SHREYA NALAWADE; DIV : D2B : ROLL NO: 34\n");

  printf("Printing Inverted Pyramid Star Pattern \n \n");
  for ( i = Rows ; i >= 1; i-- )
    {
      for ( j = 0 ; j <= Rows-i; j++ )
      {
      	printf(" ");
      }
      k = 0;
      while (k != (2 * i - 1))
      {
	printf("*");
	k++;
      }
      printf("\n");
    }
  return 0;
}
