#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>

int razrad(int a);
bool narcissistic(int num);
int main()
{
    for(int i = 10; i<9000000;i++)
    {
        if(narcissistic(i))
        {
           printf("%d, \n",i);
        }
    }
    return 0;
}
bool narcissistic(int num)
{
    int i,r = razrad(num),arr[r];
    double narc = 0;;
    //printf("r = %d\n", r);
    for(i = 1; i <= r; ++i)
    {
        arr[i] = (num/(int)(pow( 10, r-i ))) % 10;
        narc += pow(arr[i],r);
    }
    //printf("narc = %g\n", narc);
    if (num != narc)
        return false;
    else
        return true;

}
int razrad(int a)
{
    int i = 0;
    do
        ++i;
    while(a /= 10);
    return i;
}
