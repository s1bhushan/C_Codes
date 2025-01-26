



#include<stdio.h>


void string_copy(char src[],char dest[]){
    int i;
  for(i=0;src[i]!='\0';i=i+1){
    dest[i]=src[i];

    }
      dest[i]='\0';



}






int main(){
 char src[100];
 char dest[100];


 printf("Enter String  \n");
 gets(src);


 printf("STRING IS  %s \n",src);





 string_copy(src,dest);

 printf("STRING copy IS:  ");

 puts(dest);

 return 0;
}
