//10. Write a program in C to find the sum of the series 1! /1+2!/2+3!/3+4!/4+5!/5 using the function.
#include<stdio.h>
int print();
int main()
{
    printf("sum of the series 1!/1+2!/2+3!/3+4!/4+5!/5 using the function.:-");
    int s;
    s=print();
    printf("\n sum is=%d",s);
    getch();
    return 0;
}
int print()
{
    return 1*1/1 +2*2/2 +3*2*1/3 +4*3*2*1/4 +5*4*3*2*1/5;
}
