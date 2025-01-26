

#include<stdio.h>
void displayArray(int num[],int size){
int i;
 for(i=0; i<size; i++){
    {
        scanf("%d", &num[i]);
    }
 }

}

int searchArray(int num[],int size)

{
    int search,i;
   printf("Enter a search number\n");
   scanf("%d", &search);

 for(int i=0; i<size; i++){

      if(num[i]==search){
        printf("\nYou get the number at %d",i+1);
      break;
      }


       if (i == size){
    printf("%d not present in the array.\n", search);
       }
 }
     return 0;
}




int main()
{
    int size;
    int num[50];

    printf("Enter the Array size\n");
    scanf("%d", &size);

    printf("Enter the Number\n");

    displayArray(num,size);

    printf("\n\n*************************\n");

     searchArray(num,size);


    printf("\n\n*************************\n");


}
