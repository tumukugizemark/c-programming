#include <stdio.h>

 int main()
 {

  printf("Multiplication table:\n");
  int a,b;

  for(a=1;a<=10;a++)
  {
  for(b=1;b<=10;b++)

  printf("\t%d",a*b);
  printf("\n");}

  return 0;
  }