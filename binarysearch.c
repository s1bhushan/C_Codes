#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>


#define ELEMENT_NOT_FOUND -1




void display(int *p,int N){
for(int i=0;i<N;++i){
    printf(" %d \n",p[i]);
  }
}


int linear_search(int *p,int s_ele,int N){
    for(int i=0;i<N;++i){
         if(p[i]==s_ele){
            return i;
         }
    }
    return ELEMENT_NOT_FOUND;
}




int binary_search(int* p,int N,int s_ele){
 int mid;
 int low=0;
 int high=N-1;


 while(low<=high){
    mid=(low+high)/2;


    if(p[mid]==s_ele)
        return mid;
    else if(p[mid]<s_ele)
        low=mid+1;
    else
        high=mid-1;
 }


return ELEMENT_NOT_FOUND;




}




int* create_array(int N){
int *p=NULL;
  p=(int *)malloc(N*sizeof(int));
  if(p==NULL){
    puts("Error Allocating Memory \n");
    exit(1);
  }


  return p;
}


void init_array(int *p, int N){
  time_t t;
  t=time(0);
  srand(t);  // seed for random function
  for(int i=0;i<N;++i){
     p[i]=rand();

  }
}


int main(){
  int N;




  printf("Enter N  \n");
  scanf("%d",&N);


  // Create Array
  int *p=create_array(N);


  // Initialize Array
  init_array(p,N);


  // To Print Array
  display(p,N);


  int ele;
  printf("Which Element Wamt To Search \n");
  scanf("%d",&ele);


 // Linear Search

 int res1=binary_search(p,N,ele);
  if(res1==-1)
     printf("NOT FOUND %d ",res1);

  else
   printf("Found At index %d  ELEMENT  %d \n",res1,p[res1]);


  int res=linear_search(p,ele,N);
  if(res>0)
    printf("\nFound At index %d  ELEMENT  %d \n",res,p[res]);
  else
    printf("NOT FOUND %d ",res);





    free(p);


    //.. p is Dangling Pointer
    p=NULL;


}




