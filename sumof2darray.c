#include<stdio.h>
 int main()

{
    int n,m;
    scanf("%d",&n);
    scanf("%d",&m);
    int array[n][m],b[n][m];
    for(int index=0;index<n;index++)
    {
        for(int j=0;j<m;j++){

            scanf("%d",&array[index][j]);
        }

    }
    for(int index=0;index<n;index++)
    {
        for(int j=0;j<m;j++){

            scanf("%d",&b[index][j]);
        }

    }
 for(int index=0;index<n;index++)
    {
        for(int j=0;j<m;j++){

            printf("%d ",array[index][j]+b[index][j]);
        }

    }


    return 0;

}



































