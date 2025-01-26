
#include<stdio.h>
 int main()

 {
     int n,num,sum;
     printf("\nEnter the number= ");
     scanf("%d",&n);

     num=n%10;
     printf("\nThe first digit=%d",num);

     for (n;n>9;n)
     {
         n=n/10;
     }
        printf("\nThe last digit=%d",n);
        sum=num+n;

        printf("\nThe sum of digit=%d",sum);
        return 0;

 }
