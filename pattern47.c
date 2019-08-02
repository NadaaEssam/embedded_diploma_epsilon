#include<stdio.h>
#include<conio.h>
int main()
{

    for(int i=5;i>=0;i--) //rows
    {

        for (int j=4;j>=i;j--) //spaces
        {
            printf(" ");
        }
        for (int n=1;n<= 2*i-1;n++) //stars
        {
            printf("*");
        }
        printf("\n");}
}
