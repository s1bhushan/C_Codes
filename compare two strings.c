


#include<stdio.h>


void string_compare(char src[],char dest[]){
    int i,temp=1;
  for(i=0;src[i]!='\0';i=i+1){
    if( dest[i]!=src[i])
    {
        temp=0;
           break;
    }}
    if(temp==1)
       {
           printf("Equal Matrices\n");

       }
       else{
        printf("Not Equal Matrices\n");
  }


  dest[i]='\0';


}


int main(){
 char src[100];
 char dest[100];


 printf("Enter 1st String  \n");
 gets(src);


 printf("STRING 1 IS  %s \n",src);


 printf("Enter 2nd String  \n");
 gets(dest);


 printf("STRING 2 IS  %s \n",dest);


 string_compare(src,dest);



 return 0;
}
