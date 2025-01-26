
#include<stdio.h>
int sumnum(int num,int num1)
{

    int sum=num+num1;
     return sum;
}
int subnum(int num,int num1)
{
    int sub=num-num1;
     return sub;
}
int multinum(int num,int num1)
{
    int multi=num*num1;
     return multi;
}
int divnum(int num,int num1)
{
     int div=num/num1;
     return div;
}


main(){


int num,num1;
printf("Enter NUM \n");
scanf("%d",&num);
printf("Enter NUM1 \n");
scanf("%d",&num1);


int Addition=sumnum(num,num1);
printf("Sum  %d ",Addition);
int Substraction=subnum(num,num1);
printf("sub  %d ",Substraction);
int multiply=multinum(num,num1);
printf("multi  %d ",multiply);
int divition=divnum(num,num1);
printf("div %d ",divition);
}

