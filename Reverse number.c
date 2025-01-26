#include<stdio.h>
int reverseNum(int n)
{
    int rev=0,rem;
    while (n>0){

    rem=n%10;
    rev=rev*10+rem;

    n=n/10;

    }
    return rev;

}

main()
{


    int n;
    printf("Enter the number\n");
    scanf("%d",&n);

    int res=reverseNum(n);

printf("Rev %d",res);
}
