

#include<stdio.h>
void displayArray(int num[],int size){
int i;
 for(i=0; i<size; i++){
    {
        scanf("%d", &num[i]);
    }
 }

}

void evenOfArray(int num[],int size)

{

 for(int i=0; i<size; i++)
    {
      if(num[i]%2==0){
      printf("%d:[%d]:%d\n",num[i],i,&i);


      }

      }



}

void oddOfArray(int num[],int size)

{

 for(int i=0; i<size; i++)
    {
      if(num[i]%2==1){
      printf("%d:[%d]:%d\n",num[i],i,&i);

      }

      }



}

main()
{
    int size;
    int num[50];
    int num1[50];

    printf("Enter the Array size\n");
    scanf("%d", &size);

    printf("Enter the Number\n");

    displayArray(num,size);

    printf("\n\n*************************\n");

    printf("Even\n");

    evenOfArray(num,size);
    printf("\nOdd\n");
    oddOfArray(num,size);

    printf("\n\n*************************\n");


}
