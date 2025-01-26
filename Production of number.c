
#include<stdio.h>

int productnum(int num){
  int sum=1;
  for(int i=1;i<=num;i=i+1)
    sum=sum*i;


   return sum;
}
main(){


int num;
printf("Enter NUM \n");
scanf("%d",&num);


int printNum(num);
int res=productnum(num);
printf("RES  %d ",res);


}
