
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>

#define ELEMENT_NOT_FOUND -1

void display(int* p, int size)
{
    for(int i=0;i<size;++i)
    {
       printf(" %d \n",p[i]);
    }
}

void insersion(int* p, int size)
{
    int key,j,i;
printf("+++++++++++++++++++\n");
    for(i=1;i<size;i++)
    {
        j=i-1;
        key=p[i];
        while(j>=0 && p[j]>key){
            p[j+1]=p[j];
            j=j-1;
        }
            p[j+1]=key;

    }
}


void valuesArray(int* p, int size)
{
    time_t t;
    t=time(0);
    srand(t);
     for(int i=0;i<size;++i)
        {
         p[i]=rand();
        }

}


    int create_Array(int size)
    {
        int* p=NULL;
        p=(int*)malloc(size*sizeof(int));
        if(p==NULL)
            {
         puts("Error Allocating Memory \n");
         exit(1);
            }
            return p;
    }

int main()
{
    int size;
    time_t start_time,end_time,delta_time;
    printf("Enter the size of Array\n");
    scanf("%d",&size);


    int* p=create_Array(size);
    valuesArray(p,size);
    display(p,size);
    insersion(p,size);
    display(p,size);

    free(p);
    p=NULL;

    delta_time=end_time-start_time;
    printf("Required time %d",delta_time);

}
