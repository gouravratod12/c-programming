#include<stdio.h>
#include<math.h>

int main()
{
    int t;
    scanf("%d",&t);
    while(t-->0)
  {
    int n;
    scanf("%d",&n);
    int arr1[n];
    for(int index=0;index<n;index++)
   {
     scanf("%d",&arr1[index]);

   }
   int count=0;
   for(int index=0;index<n;index++)
   {
       for(int j=index+1;j<n;j++)
      {

         if(arr1[index]!=arr1[j])
         {

             count++;
         }

      }

  }
       if(count>0)
       printf("%d ",count-1);
       else
       printf("0");
       printf("\n");

  }
 return 0;


}

