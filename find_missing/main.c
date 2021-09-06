#include <stdio.h>
#include <stdlib.h>


int find_missing(const int *nums, size_t n)
{
    int interval = 0; int i = 0;
    int progress = nums[i + 1] - nums[i];
    if(nums[i + 1] == nums[i]) return nums[i];
    do
    {
           interval = nums[i + 1] - nums[i];
           i++;
    }while(progress == interval);



    return nums[i] - progress;
}
int main()
{
     int A[] = {1, 1, 1};
    int N = sizeof(A)/sizeof(int);
    printf("%d\n",find_missing((A),N));

    return 0;
}
/*
int sum = (n+1)*(nums[0]+nums[n-1]) / 2;
    for (int i = 0; i < n; ++i)
        sum -= nums[i];

    return sum;
*/
/*
int term = (int)(n+1) * (*nums + *(nums+n-1)) >> 1;
    while (n--)
        term -= *nums++;
    return term;
*/
