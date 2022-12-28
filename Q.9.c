//9. Write a program in C to find the square of any number using the function
#include<stdio.h>
int square(int x);
int main()
{
    int x;
    printf(" find the square of any number using the function:-");
    printf("\n enter a number:-");
    scanf("%d",&x);
    printf("%d of square is=%d",x,square(x));
    getch();
    return 0;
}
int square(int x)
{
    return x*x;
}
