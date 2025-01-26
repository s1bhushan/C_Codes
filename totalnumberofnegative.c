


#include<stdio.h>
void displayArray(int num[],int size){

 for(int i=0; i<size; i++)
    {
        scanf("%d", &num[i]);
    }
}

int negativeOfnum(int num[],int size)

{
    int negative=0;
 for(int i=0; i<size; i++)
      {
       if(num[i]<0){
       negative++;
       }
      }
        return negative;
}
int postiveOfnum(int num[],int size)

{
    int postive=0;
 for(int i=0; i<size; i++)
      {
       if(num[i]>0){
       postive++;
       }
      }
        return postive;
}

main()
{
    int size;
    int num[50];

    printf("Enter the Array size\n");
    scanf("%d", &size);

    printf("Enter the Number\n");
    displayArray(num,size);
    printf("\n\n*************************\n");
    int res=negativeOfnum(num,size);
    printf("\nTotal Negative Elements: %d",res);
    int res1=postiveOfnum(num,size);
    printf("\nTotal positive Elements : %d",res1);
        printf("\n\n*************************\n");


}

