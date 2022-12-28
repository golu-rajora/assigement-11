//2. Write a function to calculate HCF of two numbers. (TSRS)
#include<stdio.h>
int hcf(int x,int y);
int main()
{
    int x,y;
    printf("calculate HCF of two numbers:-");
    printf("\n enter two number:-");
    scanf("%d %d",&x,&y);
    printf("%d and %d HCF is=%d",x,y,hcf(x,y));
    getch();
    return 0;
}
int hcf(int x,int y)
{
    for(int i=1;i<=x*y;i++)
    {
        if(i%x==0&&i%y==0)
        {
            return x*y/i;
        }
    }
}
