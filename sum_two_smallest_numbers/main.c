#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <stdbool.h>

long sum_two_smallest_numbers(size_t n, const int numbers[n])
 {

  bool noSwap;
    int *a =(int*)malloc((n) * sizeof(int));
    int i = 0;
    for(i = 0; i < n; i++)
        a[i] = numbers[i];
    int temp = 0;
    for(int j = n-1; j >= 0 ; j--)
    {
        noSwap = 1;
        for(i = 0; i < n; i++)
        if(a[i]> a[i+1])
        {
            temp = a[i];
            a[i] = a[i+1];
            a[i+1] = temp;
            noSwap = 0;
        }
        if(noSwap ==1 ) break;
    }

    for(i = 0; i < n; i++)
        printf("%d ",a[i]);

    return a[0]+ a[1];
}
int main()
{

    int N[]={665, 237, 354, 260, 418, 439, 669, 192, 284, 169, 633, 810, 919, 508, 754, 270, 201, 967, 945, 555, 808, 804, 698, 836, 600, 663, 116, 775, 45, 781};
    const int n = sizeof N/ sizeof N[0];
    printf("\nn = %d\n",n);
    int res = sum_two_smallest_numbers(n, N);
    printf("\nres = %d\n",res);
    return 0;
}
