#include <stdio.h>
void main()
{
    int n;
    printf("Enter the number:");
    scanf("%d",&n);
    if(n>0)
      printf("%d is positive",n);
    else if(n<0)
      printf("%d is negative",n);
    else
      printf("%d is zero",n);
}