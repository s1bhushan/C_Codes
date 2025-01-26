

#include<stdio.h>


void displayName(char name[]){
   for(int i=0;name[i]!='\0';i=i+1){
    printf(" %c ",name[i]);
   }
}
void lengthOfstring(char name[],int i)

{
    int count;
 for (int i = 0; name[i] != '\0'; i++){

      count=i+1;

 }
 printf("\nLength of string %d ",count);
}


int main(){


  char name[50];
   int i;

  printf("Enter Name \n");

   gets(name);


displayName(name);

lengthOfstring(name,i);
return 0;
}
