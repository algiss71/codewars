#include <stdio.h>
#include <stdlib.h>
#define N 10

int arr(int A[], int n);

int even_odd(int a);
int main()
{
    int a[N]={132,210,330,410,50,60,70,80,90,100};

    printf("%d\n",arr((a),N));
    return 0;
}

int arr(int A[], int n)
{
    int ev = 0;
    int od = 0;
    int i = 0;
    int sum = 0;

    do
        {

        if(even_odd(A[i]))
            ev = 1;
        else
            od = -1;

        sum = ev + od;
        printf("sum[%d] = %d\n",i,sum);
        i++;
        }


    while((sum != 0) && (i < n));



    return A[i-1];
}
int even_odd(int a)
{
    if(a % 2 == 0)
        return 1;
    return 0;
}
