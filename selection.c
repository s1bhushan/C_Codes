
#include <stdio.h>
#include <stdlib.h>
#include<time.h>
#include<math.h>


#define ELEMENT_NOT_FOUND -1

       void display(int *p,int memory){
        for(int i=0;i<memory;++i){
         printf(" %d \n",p[i]);
         }
        }

void selection_short(int *p,int memory)
{
    printf("**********************\n");
    int mid_ind,temp;
    for(int i=0;i<memory-1;i++){
    {
        mid_ind=i;
        for(int j=i+1;j<memory;j++)
            if(p[mid_ind]>p[j])
            mid_ind=j;
    }
    temp=p[i];
    p[i]=p[mid_ind];
    p[mid_ind]=temp;
    }
}



    int create_Array(int memory)
    {
        int* p=NULL;
        p=(int*)malloc(memory*sizeof(int));
        if(p==NULL)
            {
         puts("Error Allocating Memory \n");
         exit(1);
            }
            return p;
    }

    void scan_Array(int *p, int memory)
    {
        time_t t;
        t=time(0);
        srand(t);
        for(int i=0;i<memory;++i){
         p[i]=rand();

           }
    }


int main()
{
int memory;
time_t start_time,end_time,delta_time;


    printf("Enter the size of array\n");
    scanf("%d",&memory);

    int* p=create_Array(memory);

    scan_Array(p,memory);

    display(p,memory);
start_time=time(0);
    selection_short(p,memory);
end_time=time(0);

    display(p,memory);



    free(p);

    p=NULL;

      delta_time=end_time-start_time;
      printf("Time Required Bubble Sort  %d  \n",delta_time);
}
