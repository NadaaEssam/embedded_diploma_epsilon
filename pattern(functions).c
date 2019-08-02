#include<stdio.h>
#include <conio.h>
void pattern(int star,int space)
{

    for(int i=0;i<=5;i++) //rows
    {

        for (int j=4;j>=i;j--) //spaces
        {
            printf("space");
        }
        for (int n=1;n<= 2*i-1;n++) //stars
        {
            printf("star");
        }
        printf("\n");}
}

int main ()
{
int z;
    z=pattern(*, );

    printf("z");





}
