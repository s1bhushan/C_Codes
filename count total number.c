


#include<stdio.h>
void displayArray(int num[],int size){

 for(int i=0; i<size; i++)
    {
        scanf("%d", &num[i]);
    }
}

int evenOfnum(int num[],int size)

{
    int even=0;
 for(int i=0; i<size; i++)
      {
       if(num[i]%2==0){
       even++;
       }
      }
        return even;
}
int oddOfnum(int num[],int size)

{
    int odd=0;
 for(int i=0; i<size; i++)
      {
       if(num[i]%2==1){
       odd++;
       }
      }
        return odd;
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
    int res=evenOfnum(num,size);
    printf("\nTotal Even Elements: %d",res);
    int res1=oddOfnum(num,size);
    printf("\nTotal Odd Elements : %d",res1);
        printf("\n\n*************************\n");


}

