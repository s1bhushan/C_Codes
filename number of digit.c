//Write a C program to count the number of digits in any number.


#include<stdio.h>
int main()
{
    int i,num;
    printf("Enter the number\n");
    scanf("%d",&i);

    for(num=0;i>0;num=num+1)
    {
        i=i/10;
    }
    printf("The total  number= %d",num);
}
