
#include<stdio.h>


int main()
{
    int N1,N2,res,x;
    char op;


    do{
    printf("Enter N1 \n");
    scanf("%d",&N1);
    printf("Enter N2 \n");
    scanf("%d",&N2);


    printf("****** MENU **********\n");
    printf(" ADD  +  \n");
    printf(" SUB  -  \n");
    printf(" MUL  *  \n");
    printf(" DIV  /  \n");
    printf("**********************\n");
    printf("ENter Operation SYMBOL \n");
    scanf(" %c",&op);


    switch(op){


    case '+':
        res=N1+N2;
        printf("ADD is  %d \n",res);
        break;
    case '-':
        res=N1-N2;
        printf("SUB is  %d \n",res);
        break;
     case '*':
        res=N1*N2;
        printf("MUL is  %d \n",res);
        break;


     case '/':
        res=N1/N2;
        printf("DIV is  %d \n",res);
        break;


    }


        printf("For Continue PRESS 1 \n");
        scanf("%d",&x);


   } while(x==1);
}
