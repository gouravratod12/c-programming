#include<stdio.h>

void calculate(int number[],int number_of_lines[],int n)
 {
     int sum=0;
     for(int index=0;index<n;index++)
     {
         printf("%d ",number[index]*number_of_lines[index]);
         sum+=number[index]*number_of_lines[index];


     }
     printf("\n");
     printf("%d",sum);
 }
int main()
{
    int number[]={4,2,0};
    int number_of_lines[]={4,5,6};
    int n=sizeof(number)/sizeof(number[0]);
    calculate(number,number_of_lines,n);
    return 0;

}




















