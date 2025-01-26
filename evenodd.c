#include<stdio.h>
int main()
{
    int N;
    printf("Enter N number");
    scanf("%d",&N);
    if(N%2==0)
    {
        printf("the number is even %d",N);

    }
    if(N%2==1)
    {
        printf("the number is ODD %d",N);
    }

}
