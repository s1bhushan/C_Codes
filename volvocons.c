




#include<stdio.h>


void string_convert(char src[]){
int i,count=0,cons=0;
  for(i=0;src[i]!='\0';i=i+1)

    {
        if(src[i]=='a' || src[i]=='e'|| src[i]=='i' || src[i]=='o'|| src[i]=='u')
            {
             count++;

            }

            else
            {
                cons++;
            }



    }
     printf("\ntotal number of vowels  %d\n",count);


   printf("\ntotal number of consonants %d\n",cons);


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
