
#include<stdio.h>
void displayfirstArray(int num[],int num2[],int size){
int k;
 for(int i=0; i<size; i++){
    {
        scanf("%d", &num[i]);
        num2[k]=num[i];
        k++;
    }
 }

}

void displaysecondArray(int num1[],int num2[],int size1){
int k;

 for(int j=0; j<size1; j++){
    {
        scanf("%d", &num1[j]);
        num2[k]=num1[j];
        k++;
    }
 }

}

void mergeOfArray(int num2[],int size,int size1)

{

 for(int k=0; k<size+size1; k++){
      {
       printf("%d",num2[k]);
      }

      }

}


main()
{
    int size,size1;
    int num[50];
    int num1[50];
    int num2[100];

    printf("Enter the 1st Array size\n");
    scanf("%d", &size);
    printf("Enter the 2nd Array size\n");
    scanf("%d", &size1);

    printf("Enter the 1st Array Number\n");

    displayfirstArray(num,num2,size);

    printf("Enter the 2nd Array Number\n");

    displaysecondArray(num1,num2,size1);

    printf("\n\n*************************\n");


    mergeOfArray(num2,size,size1);

    printf("\n\n*************************\n");


}
