
#include<stdio.h>


void displayArray(int A[],int size){


 for(int i=0;i<size;i=i+1){
    printf(" %d ",A[i]);
 }
}

int main(){
 int A[5];
 int B[6];int ele,pos;
 for(int i=0;i<5;i=i+1){
    printf("Enter \n");
    scanf("%d",&A[i]);
 }


 displayArray(A,5);
 printf("Enter Element To Insert \n");
 scanf("%d",&ele);
 printf("Enter  POSITION \n");
 scanf("%d",&pos);


 int j=0;
 for(int i=0;i<pos-1;i++){
    B[j]=A[i];
    j++;
 }

 B[pos-1]=ele;


 j=pos;
 for(int i=pos-1;i<5;i++){
    B[j]=A[i];
    j++;
 }

 displayArray(B,6);

}

