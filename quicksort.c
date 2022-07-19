
#include<stdio.h>
void quicksort(int *array,int first,int last)
{
     int i,j,pivot,temp;
     if(first<last)
     {
         pivot=first;
         i=first;
         j=last;
         while(i<j)
         {
             while(array[i]<=array[pivot] && i<last)
                i++;
             while(array[i]>array[pivot])
                j--;
                if(i<j)
                {
                    temp=array[i];
                    array[i]=array[j];
                    array[j]=temp;

                }

         }
         temp=array[pivot];
         array[pivot]=array[j];
         array[j]=temp;
         quicksort(array,first,j-1);
         quicksort(array,j+1,last);



     }



}
int main()
{
    int n;
    scanf("%d",&n);
    int array[n];
    for(int index=0;index<n;index++)
    {
        scanf("%d",&array[index]);

    }
    quicksort(array,0,n-1);
    for(int index=0;index<n;index++)
    {
        printf("%d ",array[index]);

    }

    return 0;

}
