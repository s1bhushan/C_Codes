
#include<stdio.h>
 int main()

 {
     int n,num;
     printf("\nEnter the number= ");
     scanf("%d",&n);

     num=n%10;
     printf("\nThe first digit=%d",num);

     for (n;n>9;n)
     {
         n=n/10;
     }
        printf("\nThe last digit=%d",n);
        return 0;

 }
