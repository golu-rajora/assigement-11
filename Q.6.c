//6. Write a function to print all Prime numbers between two given numbers. (TSRN)
#include<stdio.h>
void prime_between(int x,int y);
int main()
{
    int x,y;
    printf("to print all Prime numbers between two given numbers:-\n");
    printf("enter two number:-");
    scanf("%d %d",&x,&y);
    printf("%d and %d between all prime number is:-",x,y);
    prime_between(x,y);
    getch();
    return 0;
}
void prime_between(int x,int y)
{
    int i;
     for(x=x+1;x<=y-1;x++)
    {
      for(i=2;i<=x;i++)
      {
          if(x%i==0)
            break;
      }
      if(x==i)
       printf("%d ",x);
    }

}
