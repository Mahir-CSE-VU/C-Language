#include <stdio.h>
int main(){
char operator;
int n1;
int n2;
printf("Enter an operator");
scanf("%c",&operator);

printf("Enter number 1: ");
scanf("%d",&n1);

printf("Enter number 2: ");
scanf("%d",&n2);

switch(operator){
case '+' :
printf("The addition is= %d ",n1,n2, n1+n2);
break;

case '-' :
printf("The substract is = %d",n1,n2, n1-n2);
break;

case '*' :
printf("The multiplication is = %d ",n1,n2, n1*n2);
break;

case '/' :
printf("The divition is = %d",n1,n2, n1/n2);
break;

case '%' :
printf("The reminder is = %d",n1,n2 , n1%n2);
break;

default:
printf("please enter valid operator!\n");
}
return 0;

}
