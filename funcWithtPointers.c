#include<stdio.h>
void swap(int *x,int *y)
{
     int n;
    n=*x;
    *x=*y;
    *y=n;

printf("x= %d and y= %d",x,y);

}
void main()
{

    int x=5;
    int y=10;
    swap(x,y);
}
