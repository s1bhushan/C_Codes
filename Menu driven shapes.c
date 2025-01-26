
#include<stdio.h>


int main()
{
    int n,op,x,i,j;



    do
   {
    printf("Enter Number \n");
    scanf("%d",&n);




    printf("****** MENU **********\n");
    printf(" Enter 1 for Square\n");
    printf(" Enter 2 for triangle \n");
    printf(" Enter 3 for mirror triangle \n");
    printf(" Enter 4 for reverse triangle \n");
    printf(" Enter 5 for mirror reverse triangle\n");
    printf("**********************\n");
    printf("Enter Your Choice \n");
    scanf(" %d",&op);


    switch(op){
    case 1:{
        for(i=1;i<=n;i++)
        {
            for(j=1;j<=n;j++)
                printf("%d",j);
                printf("\n");

        }
        }
        break;

        case 2:{
        for(i=1;i<=n;i++)
        {
            for(j=1;j<=i;j++)
                printf("%d",j);
                printf("\n");

        }
        }
        break;

         case 4:{
        for(i=n;i>=1;i--)
        {
            for(j=1;j<=i;j++)
                printf("%d",j);
                printf("\n");

        }
        }
        break;

         case 3:{
        for(i=1;i<=n;i++)
        {
            for(int sp=5;sp>=i;sp--)
            printf(" ");

            for(j=1;j<=i;j++)

                printf("%d",j);
                printf("\n");


        }
        break;
         }

        case 5:{
        for(i=n;i>=1;i--)
        {
            for(int sp=5;sp>=i;sp--)
            printf(" ");

            for(j=1;j<=i;j++)

                printf("%d",j);
                printf("\n");


    }}}
   }while (x==1);
}
