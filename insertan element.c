
#include<stdio.h>


void displayArray(int num[],int size){


 for(int i=0;i<size;i=i+1){
    printf(" %d ",num[i]);
 }
}

void insertArray(int num[],int num1[])

{

 int j=0;
 int pos,ele;
 for(int i=0;i<pos-1;i++){
    num1[j]=num[i];
    j++;
 }


 num1[pos-1]=ele;


 j=pos;
 for(int i=pos-1;i<5;i++){
    num1[j]=num[i];
    j++;
 }

displayArray(num1,6);
}


int main()
{
 int num[5];
 int num1[6];
 int ele,pos;

 printf("Enter the number\n");
 for(int i=0;i<5;i=i+1){
    scanf("%d",&num[i]);
 }

 printf("\nThe number");
 displayArray(num,5);


 printf("\nEnter Element To Insert \n");
 scanf("%d",&ele);
 printf("Enter  POSITION \n");
 scanf("%d",&pos);

 insertArray(num,num1);



}
