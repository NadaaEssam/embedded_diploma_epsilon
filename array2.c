#include<stdio.h>
#include<math.h>
int main ()
{
   int n=10;
    int A[n];

    int sum=0;
    for (int i=0;i<=9;i++)
    {
        scanf("%d",&A[i]);
        sum += A[i];
    }
    float average;
    average= sum/10.0 ;
    printf("sum is %d \n average is %f \n",sum,average);
}
