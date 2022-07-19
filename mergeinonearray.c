#include<stdio.h>
#include<stdlib.h>

int cmpfunc (const void * a, const void * b) {
   return ( *(int*)a - *(int*)b );
}

int main()
{
    int n,m;
    scanf("%d",&n);
    scanf("%d",&m);
    int arr1[n],arr2[m];
 for(int index=0;index<n;index++)
 {
     scanf("%d",&arr1[index]);

 }
  for(int index=0;index<m;index++)
 {
     scanf("%d",&arr2[index]);

 }
 int i=n-1;
 int j=0;
 int temp;
 while(i>=0 && j<m)
 {
     if(arr1[i]>arr2[j])
     {
         temp=arr1[i];
         arr1[i]=arr2[j];
         arr2[j]=temp;

     }
     j++;
     i--;

 }
 qsort(arr1,n,sizeof(int),cmpfunc);
 qsort(arr2,m,sizeof(int),cmpfunc);
  for(int index=0;index<m+n;index++)
 {
     if(index<n)
     printf("%d ",arr1[index]);
     else
     printf("%d ",arr2[index-n]);

 }
 return 0;

}
