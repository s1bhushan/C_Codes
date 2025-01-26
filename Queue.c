


#include<stdio.h>
#include<stdlib.h>
#include<time.h>

struct queue{
int*A;
int front;
int rear;
int capacity;

};
typedef struct queue Q;

Q* arraysize(int N)
{
    Q* p=NULL;
    p=(Q*)malloc(sizeof(Q));
    p->A=(int)malloc(N*sizeof(int));
    p->front=-1;
    p->rear=-1;
    if(p==NULL)
    {
        printf("Error in memory");
        exit(1);

    }

}

void enqueue(Q* p,int data,int N)
{
    if((p->rear+1)%N==p->front)
    {
        printf("\nIs Full");
    }
    else if
    (p->rear==-1&&p->front==-1)
    {
        p->rear=p->front=0;
        p->A[p->rear]=data;
    }
    else
    {
        p->rear=(p->rear+1)%N;
        p->A[p->rear]=data;
    }

}


int dequeue(Q*p,int N)
{
    int data;
    if(p->rear==-1&&p->front==-1)
    {
        printf("Is Empty");
    }
    else if(p->front>p->rear)
    {
    printf("Is Empty");
    }
    else
    {
        data=p->A[p->front];
        p->front=(p->front+1)%N;
        return data;
    }
}

int peek(Q* p)
{
    int x=-1;
    if(p->front==-1)
    {
        return x;
    }
    return p->A[p->front];
}

void display(Q*p)
{
    printf("\n+++++++++++++++++\n");
    for(int i=p->front;i<=p->rear;i++)
    {
        printf("%d\n",p->A[i]);
    }
}

int search(Q*p,int ele)
{

    for(int i=p->front;i<=p->rear;i++)
{
    if(p->A[i]==ele)

        return i;



}
return -1;
}

int main()
{
    int N,data;
    printf("Enter the size\n");
    scanf("%d",&N);

    Q* p=arraysize(N);

    for(int i=0;i<N;i++)
    {
        printf("Enter\n");
        scanf("%d",&data);
        enqueue(p,data,N);
    }

display(p);
    printf("peek is %d",peek(p));

    int ele;
printf("\nEnter the search elem\n");
scanf("%d",&ele);
    printf("\nelem %d is in %d",ele,search(p,ele));

dequeue(p,N);

display(p);
printf("peek is %d",peek(p));

enqueue(p,22,N);

printf("\n\n%d\n",p->A[0]);




    return;
}
