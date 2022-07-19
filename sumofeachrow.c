#include<stdio.h>
 int main()

{
    int n,m;
    scanf("%d",&n);
    scanf("%d",&m);
    int array[n][m];
    int sum=0;
    for(int index=0;index<n;index++)
    {
        for(int j=0;j<m;j++){

            scanf("%d",&array[index][j]);
            sum+=array[index][j];
        }
           printf("%d",sum);
           printf("\n");
    }

    printf("\n");

    return 0;

}



















