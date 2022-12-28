//5. Write a function to print first N prime numbers (TSRN)
#include<stdio.h>
void first_prime(int x);
int main()
{
    int x;
    printf("to print first N prime numbers:-\n");
    printf("enter a number:-");
    scanf("%d",&x);
    printf("first %d prime number is:-",x);
    first_prime(x);
    getch();
    return 0;
}
void first_prime(int x)
{
    int y,i;
     for(y=2;x>0;y++)
    {
      for(i=2;i<=y;i++)
      {
          if(y%i==0)
            break;
      }
      if(y==i)
    {printf(" %d",y);
    x--;}
    }
}
