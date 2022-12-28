//7. Write a function to print first N terms of Fibonacci series (TSRN)
#include<stdio.h>
void fibo(int x);
int main()
{
    int x;
    printf(" print first N terms of Fibonacci series:-");
    printf("\n enter a number:-");
    scanf("%d",&x);
    printf(" %d terms fibonacci series is:-",x);
    fibo(x);
    getch();
    return 0;
}
  void fibo(int x)
  {
      int a=-1,b=1,s=0;
      for(int i=1;i<=x;i++)
      {
          s=a+b;
          printf(" %d",s);
          a=b;
          b=s;
      }
  }
