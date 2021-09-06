#include <stdio.h>
#include <stdlib.h>
int get_sum(int a , int b) {
    if(a > b)
    {
        int tmp = 0;
        tmp = a;
        a   = b;
        b   = tmp;
    }
    int sum = 0,i = 0;
    if(a==b) return a;
    for (i = a; i<=b;i++)
        sum += i;


 return sum;   // Good luck
}
int main()
{
    printf("%d",get_sum(2,-5));
    return 0;
}
