

#include <stdio.h>



void frequencyArray(int* p,int* f,int size)
{
    int count;


    printf("Enter elements in array: ");
    for(int i=0; i<size; i++)
    {
        scanf("%d", &p);


        f = -1;
    }


    for(int i=0; i<size; i++)
    {
        count = 1;
        for(int j=i+1; j<size; j++)
        {

            if((p+i)==(p+j))
            {
                count++;

                *(p+j) = 0;
            }
        }

        if((f+i) != 0)
        {
            *(p+i) = count;
        }
    }

    printf("\nFrequency of all elements of array : \n");
    for(int i=0; i<size; i++)
    {
        if((f+i) != 0)
        {
            printf("%d occurs %d times\n", *p, *f);
        }
    }
}
int main()
{
    int arr[100], freq[100];
    int size, i, j, count;
        int* p = &arr;
        int* f = &freq;




    printf("Enter size of array: ");
    scanf("%d", &size);

    frequencyArray(p,f,size);
    return 0;
}


