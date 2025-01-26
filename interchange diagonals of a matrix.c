



#include<stdio.h>


int main(){


  int A[3][3];
    int B[3][3];

  int count=1;
  int scalar;

  for(int i=0;i<3;i++){
     for(int j=0;j<3;j++){
        printf("Enter Array %d Elements number\n",count);
        scanf("%d",&A[i][j]);
        count++;
     }
  }

    printf("\n*************************\n");


  for(int i=0;i<3;i++){
     for(int j=0;j<3;j++){
        printf("%d ",A[i][j]);
     }
     printf("\n");
  }

        printf("\n*************************\n");

         printf("Enter your choice number to multiply \n");
        scanf("%d",&scalar);
        printf("\n*************************\n");


         for(int i=0;i<9;i++){
     for(int j=0;j<9;j++){

        B[i][j]=scalar*A[i][j];

     }
      printf("\n*************************\n");

  for(int i=0;i<3;i++){
     for(int j=0;j<3;j++){
        printf("%d ",B[i][j]);
     }
     printf("\n");
  }

return 0;

}
}
