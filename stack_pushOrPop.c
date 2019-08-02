#include<stdio.h>
#include<conio.h>
int main()
{int i;
int c;
int place;
int n;
    int X[10]={0};
    printf("select 1 for push or 0 for pop ");
    scanf("%d",&c);
    printf("choose the place");
    scanf("%d",&X[place]);
    for ( i=0;i<10;i++)

    {

if (c==1)
{
    printf("choose a number to push\n");
    scanf("%d",& n);
    printf("X[%d] is %d\n",X[place],n);
    X[place]++;
}
    }
    if (c==0)
    {
        printf(" the number in X[%d] is 0",X[place]);
    }
    }
