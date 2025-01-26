#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define Elementsnot_found -1

struct node{
int data;
struct node* next;
};

typedef struct node node_t;



void printList(node_t* p_list){
      node_t* run=p_list->next;

     while(run!=NULL){
      printf("%d ->  ",run->data);
       run=run->next;
     }

}


node_t* create_Memory(int data)
{
    node_t* plist=(node_t*)malloc(sizeof(node_t));
    if(plist==NULL)
    {
        puts("Error in memory\n");
        exit(1);

    }
    plist->data=data;
    plist->next=NULL;

    return plist;

}

void inser_start(node_t* plist, int data)
{
    node_t* newnode=NULL;
    newnode=create_Memory(data);
    if(plist->next==NULL)
    {
        plist->next=newnode;
    }
    else
        newnode->next=plist->next;
        plist->next=newnode;
}

void insert_end(node_t* plist,int data)
{
    node_t* newnode=NULL;
    newnode=create_Memory(data);

    node_t* run=plist;
    while(run->next!=NULL){
      run=run->next;
   }

   run->next=newnode;
}

int main()
{
    int data;
    node_t* plist=create_Memory(0);



    for(int i=0;i<5;i++)
    {
        printf("enter\n");
        scanf("%d",&data);
           inser_start(plist,data);

    }

    for(int i=0;i<2;i++)
    {
        printf("enter\n");
        scanf("%d",&data);
           insert_end(plist,data);

    }
printf("\n\n***************************\n");

printList(plist);

printf("\n\n***************************\n");


free(plist);
plist=NULL;

    return 0;

}
