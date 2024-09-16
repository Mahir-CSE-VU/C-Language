#include<stdio.h>
int main()
{

   int day, month,year,days;

   printf("Enter days\n");

    scanf("%d",&day);

year=(day/365);
month=(day%365)/30;
days=(day%365)%30;



  printf("Year=%d\nMonth=%d\nDays=%d",year,month,days);

    return 0;
}
