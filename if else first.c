#include<stdio.h>
int main ()
{
    float a;

    printf("Enter your Mark\n");
    scanf("%f",&a);


    if(a>=80)

    printf(" your Grade A+");


    else if (a>=75)

    printf(" your Grade A");


     else if (a>=70)

    printf(" your Grade A-");


     else if (a>=65)

    printf(" your Grade B+");


     else if (a>=60)

    printf(" your Grade B");


     else if (a>=55)

    printf(" your Grade B-");


     else if (a>=50)

    printf(" your Grade C+");


     else if (a>=45)

    printf(" your Grade C");


     else if (a>=40)

    printf(" your Grade D");

    else if(a<40&&a>=1)

    printf(" your Grade F");

    else
    printf("Error");

    return 0;
}
