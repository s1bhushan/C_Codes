

#include<stdio.h>
void displayArray(int num[],int size){

 for(int i=0; i<size; i++)
    {
        scanf("%d", &num[i]);
    }
}

int maxOfnum(int num[],int size)

{
    int max=num[0];
 for(int i=0; i<size; i++)
      {
       if(max<num[i]){
       max=num[i];
       }
      }
        return max;
}
int minOfnum(int num[],int size)

{
    int min=num[0];
 for(int i=0; i<size; i++)
      {
       if(min>num[i]){
       min=num[i];
       }
      }
        return min;
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
    int res=maxOfnum(num,size);
    printf("\nMaximum Elements : %d",res);
    int res1=minOfnum(num,size);
    printf("\nMinimum Elements : %d",res1);
        printf("\n\n*************************\n");


}

