



#include<stdio.h>


int main(){


  int A[3][3];
  int sum=0;
  int count=1;
  int i,j;


  for(i=0;i<3;i++){
     for(j=0;j<3;j++){
        printf("Enter Array %d Elements number\n",count);
        scanf("%d",&A[i][j]);
        count++;
     }
  }

    printf("\n*************************\n");


  for(i=0;i<3;i++){
     for(j=0;j<3;j++){
        printf("%d ",A[i][j]);
     }
     printf("\n");
  }

    printf("\n*************************\n");


      for(i=0;i<3;i++)
    {
        sum = sum + A[i][i];
    }

    printf("\nSum of main diagonal elements = %d", sum);

return 0;

}

