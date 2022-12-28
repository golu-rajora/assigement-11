//4. Write a function to find the next prime number of a given number. (TSRS)
#include<stdio.h>
 int next_prime(int x);
int main()
{
    int x,y;
    printf("to find the next prime number of a given number:-\n");
    printf("enter a prime number:-");
    scanf("%d",&x);
    y=next_prime(x);
    printf("next prime number is=%d",y);
    getch();
    return 0;
}
    int next_prime(int x)
    {
        int i;
        for(x=x+1;x<x+1;x++)
    {
      for( i=2;i<=x;i++)
      {
          if(x%i==0)
            break;
      }
      if(x==i)
        break;
    }
      return x;
    }

