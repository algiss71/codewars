#include <stdio.h>
#include <stdlib.h>
int solution(int number) {
    int summ = 0;
    int *a =(int*)malloc((number) * sizeof(int));

    for(int i = 1; i< number;i++)
    {
        a[i] = i ;
        if((a[i] % 3 == 0)||( a[i] % 5 == 0))
            {
             summ +=a[i];
            }
    }

    return summ;
}
int main()
{
    printf("Summ = %d",solution(100));
    return 0;
}
