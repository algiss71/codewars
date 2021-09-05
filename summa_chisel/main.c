#include <stdio.h>
#include <stdlib.h>

int main()
{
    int v = 12345;
    int i = 0 ;
    int n = v;
    //for(i=0;v > 0;i++)
      //  v = v / 10;
    while(n)
    {
        n /= 10;
        i++;
    }

    printf("%d",i);

    int a[i];

    for (int j = 0; j< i; j++)
    {
        a[j] = v % (j+10) / (j * 10);
        printf("a[%d] = %d",j,a[j]);
    }

    printf("i = %d\n", i);
  int  v0 = v % 100000/10000;
    printf("v0 = %d\n",v0);
  int  v1 = v%10000/1000;
    printf("v1 = %d\n",v1);
  int  v2 = v%1000/100;
    printf("v2 = %d\n",v2);
  int  v3 = v%100/10;
    printf("v3 = %d\n",v3);
  int  v4 = v%10;
    printf("v4 = %d\n",v4);


    return 0;
}
