#include<stdio.h>
int main ()
{
int dol,tk;
float taka;

printf("Enter Taka\n");
scanf("%d",&tk);


dol=(tk/122.5);
taka=(tk-(dol*122.5));


printf("Doller=%d\tTaka Return=%.2f",dol,taka);


    return 0;
}
