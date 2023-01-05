#include <stdio.h>
void main()
{
    int n;
    printf("Enter the Year:");
    scanf("%d",&n);
    if( (n%4==0 && n%100!=0) || n%400==0 )
       printf("Entered year is the Leap Year");
    else
       printf("Entered year is not a Leap Year");
}