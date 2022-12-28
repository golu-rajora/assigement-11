//1. Write a function to calculate LCM of two numbers. (TSRS)
#include<stdio.h>
int lcm(int x,int y);
int main()
{
    int x,y;
    printf("calculate LCM of two numbers:-");
    printf("\n enter two number:-");
    scanf("%d %d",&x,&y);
    printf("%d and %d LCM is=%d",x,y,lcm(x,y));
    getch();
    return 0;
}
int lcm(int x,int y)
{
    for(int i=1;i<=x*y;i++)
    {
        if(i%x==0&&i%y==0)
        {
            return i;
        }
    }
}
