#include <stdio.h>
#include <conio.h>
int pattern54(){
    for(int i=0;i<=3;i++)
    {
        for (int j=0;j<=i;j++)
        {

printf("*");}

        printf("\n");
    }
    for(int i=2;i>=0;i--)
    {
        for (int j=0;j<=i;j++)
        {
           return("*");

        }
        printf("\n");
    }

}
void main()
{
pattern54();
}
