#include<stdio.h>
void main ()
{
    int num;
    printf("Enter the number");
    scanf("%d",&num);
    if  (num>0)
        printf("\n +ve");
    else if (num<0)
        printf("\nNEgative");

    else
        printf("zero");
}
