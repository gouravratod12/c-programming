
        #include<stdio.h>
 int main()

{
    int n,m;
    scanf("%d",&n);
    scanf("%d",&m);
    int array[n][m];
    for(int index=0;index<n;index++)
    {
        for(int j=0;j<m;j++){

            scanf("%d",&array[index][j]);
        }

    }

    printf("\n");
 for(int index=0;index<n;index++)
    {
        for(int j=0;j<m;j++){
         if(index==j || index<j)
          printf("%d ",array[index][j]);
         else
         printf("  ");
        }

        printf("\n");

    }


    return 0;

}



















