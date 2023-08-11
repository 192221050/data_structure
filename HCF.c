#include<stdio.h>
#include<coniho.h>
int main()
{
int num1,num2,hcf,remainder, numertor,denometer;
printf("enter two number s\n");
scanf("%d %d,&num1,&num2");
if(num1>num2)
{
numerator=num1;
denomenater=num2;
}
else
{
numerator=num2;
denomenator=num1;
}
remainder=numerator%denomentor;
while(remainder!=0)
{
numerator=demomenator;
denomenator=remainder;
remainder=nemerater%denomenater;
}
hcf=denomenator;
printf("HCF of % and %d d\n",num1,num2,hcf)
} vo-p=-==-=                         
