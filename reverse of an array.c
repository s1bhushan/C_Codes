

#include<stdio.h>
void displayArray(int num[],int size){
int i;
 for(i=0; i<size; i++){
    {
        scanf("%d", &num[i]);
    }
 }

}

void reverseOfArray(int num[],int size)

{

 for(int i=size-1; i>=0; i--)
      {
     printf("%d",num[i]);
      }



}


int main()
{
    int size,temp;
    int num[50];

    printf("Enter the Array size\n");
    scanf("%d", &size);

    printf("Enter the Number\n");

    displayArray(num,size);

    printf("\n\n*************************\n");

    reverseOfArray(num,size);


    printf("\n\n*************************\n");


}
