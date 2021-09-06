#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
//#define N 10
int find_outlier(const int *values, size_t count);
bool even_odd(int v);

int main()
{


    int A[] = {2,6,8,2,-66,34,-35,66,700,1002,-84,10,4 };
    int N = sizeof(A)/sizeof(int);
    printf("%d\n",find_outlier((A),N));
    return 0;
}

int find_outlier(const int *values, size_t count)
{
    size_t i = 0;
    int even = 0;
    int odd = 0;
    int sum = 0;

    do
    {
        if(even_odd(values[i++])) even = -1;
        else                    odd = 1;

        sum = even + odd;

    }
    while(sum != 0 && i < count);

    if(i==2) return values[i-2];
    return values[i-1];

}

bool even_odd(int v)
{
    return v & 1;
}
