#include <stdio.h>
void pattern15()
{



    for (int i=4;i>=0;i--)
    {

        for (int j=0;j<=i;j++)
        {

        printf("*");

        }
        printf("\n");
    }
}
void main()
{
    pattern15()
}
