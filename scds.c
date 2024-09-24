#include<stdio.h>

int main()
{
  char cha;

   printf("Enter your Character\n");

   scanf("%c",&cha);

   if(cha>= 'A'&& cha<='Z')
   printf("Capital Letter");

     else if(cha>= 'a'&& cha<='z')
   printf("Small Letter");


    else if(cha>= '0'&& cha<='9')
   printf(" A Digit ");


   else

   printf("Special symble");









}
