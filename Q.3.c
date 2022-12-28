//3. Write a function to check whether a given number is Prime or not. (TSRS)
#include<stdio.h>
int prime(int x);
int main()
{
    int x;
    printf("check whether a given number is Prime or not:-");
    printf("\n enter a number:-");
    scanf("%d",&x);
    if(prime(x))
        printf("%d is prime",x);
    else
        printf("%d is not prime",x);
    getch();
    return 0;
}
  int prime(int x)
  {
      int i;
      for( i=2;i<=x;i++)
      {
          if(x%i==0)
          {
              if(x==i)
                i=0;
             break;
          }
     }
     if(i)
        return 0;
     else
        return 1;

  }
