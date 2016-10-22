#include<stdio.h>
void main()
{
    int num,count=0;
    printf("Enter a number");
    scanf("%d",&num);
    if (num<10&&num>-10)
        printf("\n1 digit number");
    else
    {
        for(;num!=0;)
        {
            count++;
            num/=10;
        }
        printf("It is a %d digit number",count);
    }

}
