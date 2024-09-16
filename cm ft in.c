#include<stdio.h>
int main ()
{
  int feet;
  float inches,cm;

  printf("Enter hight in cm\n");
  scanf("%f",&cm);


feet=(cm/2.54/12);
inches=(cm/2.54)-(feet*12);


printf("feet=%d\t inches=%.2f",feet,inches);






    return 0;
}
