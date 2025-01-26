
//    Write a C program to calculate the sum of digits of any number.

#include<stdio.h>
 int main()

 {
     int n,num,rem;
     printf("\nEnter the number= ");
     scanf("%d",&n);

     for(num=0;n>0;)
     {
         rem=n%10;
         num=num+rem;
         n=n/10;

     }
     printf("The sum of number= %d",&num);

     return 0;
 }
