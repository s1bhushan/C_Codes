

#include<stdio.h>
#include <string.h>


void displayName(char name[]){
   for(int i=0;name[i]!='\0';i=i+1){
    printf(" %c ",name[i]);
   }
}


void findOfstring(char name[],char namelen,int chfind)

{
    int i,count=0;
 for (int i = 0; i<=namelen(name); i++){
        if(name[i]==chfind)
        {

      count++;

      break;
        }}
        if(count == 0)
  	{
  		printf("\n not found Search Character '%c' ", chfind);
	}
	else
	{
		printf("\n\n The First Occurrence of the Search Element '%c' is at Position %d \n", chfind, i + 1);
	}


}


int main(){


  char name[50];
   int i;
   char chfind;

  printf("Enter Name \n");

   gets(name);


displayName(name);


printf("\n Please Enter the Character that you want to Search for :  ");
  	scanf("%c", &chfind);

findOfstring(name,namelen,chfind);
return 0;
}
