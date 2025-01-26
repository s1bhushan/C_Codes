



#include<stdio.h>


void string_conca(char src[],char dest[],char mix[]){
    int i,j,k;
  for(i=0;src[i]!='\0';i=i+1){
        mix[k]=src[i];
        k++;

  }

   for(j=0;dest[j]!='\0';j=j+1){
        mix[k]=dest[j];
        k++;

  }
  mix[k]='\0';



}


int main(){
 char src[100];
 char dest[100];
 char mix[100];

 printf("Enter 1st String  \n");
 gets(src);


 printf("STRING 1 IS  %s \n",src);


 printf("Enter 2nd String  \n");
 gets(dest);


 printf("STRING 2 IS  %s \n",dest);



 string_conca(src,dest,mix);
 printf("\nSTRING concatenate IS: ");

puts(mix);

 return 0;
}
