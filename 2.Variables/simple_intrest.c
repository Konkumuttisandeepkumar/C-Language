#include<stdio.h>
int principal,months;
float intrest,si;

int main(){

printf("Please enter the principal amount:");
scanf("%d",&principal);

printf("Please enter the time period in months:");
scanf("%d",&months);

printf("Please enter the rate of intrest:");
scanf("%f",&intrest);

si=(principal*months*intrest)/100;

printf("The simple intrest is %f",si);

return 0;

}





