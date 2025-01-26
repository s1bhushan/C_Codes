
#include<stdio.h>


int main()
{
    int n,rem,sum=0,num,rev,x,thenumb;
    int op;


    do
   {
    printf("Enter Number \n");
    scanf("%d",&n);
    thenumb=n;



    printf("****** MENU **********\n");
    printf(" Enter 1 for Sum of digit\n");
    printf(" Enter 2 Product of digit\n");
    printf(" Enter 3 Rev number\n");
    printf(" Enter 4 palindrome number\n");
    printf("**********************\n");
    printf("Enter Your Choice \n");
    scanf(" %d",&op);


    switch(op){


    case 1:{

        while(n>0)
     {
         rem=n%10;
         printf("%d\n",rem);
         sum=sum+rem;

         n=n/10;
     }
        printf("Sum of digit is  %d \n",sum);
        break;}

    case 2:{
        sum=1;

        while(n>0)
     {
         rem=n%10;
         printf("%d\n",rem);
         sum=sum * rem;

         n=n/10;
     }
        printf("Product of digit is  %d \n",sum);
        break;}

     case 3:{
         rev=0;

        while (n>0)
     {
         num=n%10;
         rev=rev*10+num;
         n=n/10;

     }
     printf("\nThe reverse number=%d",rev);
     break;}



     case 4:{
         rev=0;

        while (n>0)
     {
         num=n%10;
         rev=rev*10+num;
         n=n/10;
     }

     printf("\nThe reverse number is = %d",rev);

     if (thenumb==rev)
        printf("\n\nThe number is palindrome\n");
     else
        printf("\n\nThe number is not palindrome\n");

     }

    }
        printf("For Continue PRESS 1 \n");
        scanf("%d",&x);
        break;

   }
   while(x==1);

}

