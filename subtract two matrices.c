


#include<stdio.h>


int main(){


  int A[3][3];
  int B[3][3];
  int C[3][3];
  int count=1;

  for(int i=0;i<3;i++){
     for(int j=0;j<3;j++){
        printf("Enter 1st Array %d Elements \n",count);
        scanf("%d",&A[i][j]);
        count++;
     }
  }
   count=1;
  for(int i=0;i<3;i++){
     for(int j=0;j<3;j++){
        printf("Enter 2nd Array %d Elements \n",count);
        scanf("%d",&B[i][j]);
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

  for(int i=0;i<3;i++){
     for(int j=0;j<3;j++){
        printf("%d ",B[i][j]);
     }
     printf("\n");
  }
        printf("\n*************************\n");

         for(int i=0;i<9;i++){
     for(int j=0;j<9;j++){

        C[i][j]=A[i][j]-B[i][j];

     }
      printf("\n*************************\n");

  for(int i=0;i<3;i++){
     for(int j=0;j<3;j++){
        printf("%d ",C[i][j]);
     }
     printf("\n");
  }

return 0;

}
}
