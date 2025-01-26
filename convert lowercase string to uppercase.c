
#include<stdio.h>


void string_convert(char src[]){
int i;
  for(i=0;src[i]!='\0';i=i+1){
        if(src[i]>='a' && src[i]<='z'){
   src[i]=src[i]-32;

   }
  }


}


int main(){
 char src[100];
int i;

 printf("Enter String  \n");
 gets(src);


 printf("STRING IS  %s \n",src);





 string_convert(src);

puts(src);


 return 0;
}
