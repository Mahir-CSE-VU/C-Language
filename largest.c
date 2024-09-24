#include<stdio.h>
int main()
{
   int  a,b,c;

   printf("Enter Number\n");
   scanf("%d %d %d",&a,&b,&c);




    if(a == b && a > c)
        printf("A and B are the largest\n");
    else if(b == c && b > a)
        printf("B and C are the largest\n");
    else if(a == c && a > b)
        printf("A and C are the largest\n");
    else if(a > b && a > c)
        printf("A is largest\n");
    else if(b > c && b > a)
        printf("B is largest\n");
    else if(c > a && c > b)
        printf("C is largest\n");


    else
        printf("All numbers are equal\n");


}
