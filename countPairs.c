#include <stdio.h> //hackerrank.com example
char A[11]={1,2,2,2,1,5,2,2,2,3,2};
char counter1=0;
char counter2=0;
char counter3=0;
char counter5=0;
int main()
{
    int num =char countPairs(&A,11);
    printf("%d",num);
}
char countPairs (char *A,char size)
{

    for (int i=0;i<= size;i++)
    {
        if (A[i]==1)
        {
            counter1++;
        }
        else if (A[i]==2)
        {
            counter2++;
        }
        else if (A[i]==3)
        {
            counter3++;
        }
        else if (A[i]==5)
        {
            counter5++;
        }
        if (counter1 %2 ==0)
        {
            int pair = counter1/2;
            printf("%d",pair);
        }
    }
}
