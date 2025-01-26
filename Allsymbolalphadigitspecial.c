



#include<stdio.h>


void string_convert(char src[]){
int i,count=0,num=0,spe=0;
  for(i=0;src[i]!='\0';i=i+1)

    {
        if((src[i]>='a' && src[i]<='z')|| (src[i]>='A' && src[i]<='Z'))
            {
             count++;

            }
            else if (src[i]>='0' && src[i]<='9')

            {
             num++;

            }
            else
            {
                spe++;
            }



    }
     printf("\ntotal number of Alphabets %d\n",count);





    printf("\ntotal number of Digit %d\n",num);



   printf("\ntotal number of special char %d\n",spe);


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
