#include<stdio.h>
#include<stdlib.h>
#include<time.h>



struct stack{
    int* A;
    int top;
    int capacity;
};

typedef struct stack st;

st* create_size(int N)
{
    st* p=NULL;
    p=(st*)malloc(1*sizeof(st));
    p->A=(int*)malloc(N*sizeof(int));
    p->top=-1;
    p->capacity=N;

    if(p==NULL)
    {
        printf("Error\n");
        exit(1);

    }
    return p;
}


void push(st* p,int data,int N)
{
    if(p->top==N)
    {
      printf("Full\n");
    }
    else
    {
        p->top++;
        p->A[p->top]=data;
    }
}
int peek(st*p)
{
    if(p->top==-1)
    {
        return -1;
    }
   return p->A[p->top];
}

int pop(st*p)
{
    int x=-1;
    if(p->top==-1)
    {
        return x;
    }
    x=p->A[p->top];
    p->top--;
    return x;
}

int search(st* p,int f_data){


for(int i=0;i<=p->top;++i){
    if(p->A[i]==f_data)
        return i;
}
return -1;


}

void display(st* p)
{
    for(int i=0;i<=p->top;i++)
    {
        printf("%d   %d  %d \n",p->A[i],i,&p->A[i]);
    }
}


int main()
{
    int N;
    printf("Enter the size of Array\n");
    scanf("%d",&N);

    st* p=create_size(N);

 push(p,11,N);
     push(p,22,N);
     push(p,33,N);
     push(p,44,N);
     push(p,55,N);
     push(p,56,N);
     push(p,57,N);
     push(p,58,N);
     push(p,59,N);
     push(p,60,N);
     push(p,65,N);

     display(p);
        printf("\nSearch 33  AT  %d  \n",search(p,33));

        printf("PEEK   %d \n\n",peek(p));

           printf("POP %d \n", pop(p));
              printf("POP %d \n", pop(p));
                 printf("POP %d \n", pop(p));
                    printf("POP %d \n", pop(p));
                       printf("POP %d \n", pop(p));
                          printf("POP %d \n", pop(p));
                             printf("POP %d \n", pop(p));




    free(p);
    p=NULL;

    return 0;

}
