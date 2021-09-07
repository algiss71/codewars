#include<stdio.h>
#include<string.h>
int writelong(int *a);
int complong(int *a, int *b);

int main(void)
{
    char str[100],str1[100],str2[100];
    int a[100],b[100],c[100];
    int i;
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    scanf("%s",str);
    /*char num1[80], num2[80];
    printf("Enter first number: ");
    gets(a);
    //printf("Enter second number: ");
    //gets(num2);*/
    a[0] = strlen(str);

    for(i = 1;i <= a[0];i++)
    a[a[0] - i + 1] = str[i - 1] - 48;

    scanf("%s",str1);
    b[0] = strlen(str1);
    for(i = 1;i <= b[0];i++)
    b[b[0] - i + 1] = str1[i - 1] - 48;
    scanf("%s",str2);
    c[0] = strlen(str2);
    for(i = 1;i <= c[0];i++)
    c[c[0] - i + 1] = str2[i - 1] - 48;
    if(complong(a,b) == 1 && complong(a,c) == 1)
    writelong(a);
    if(complong(a,b) == -1 && complong(b,c) == 1)
    writelong(b);
    if(complong(c,a) == 1 && complong(c,b) == 1)
    writelong(c);
}
int writelong(int *a)
{
    int i;
    for(i = a[0];i >= 1;i--)
    printf("%d",a[i]);
return 0;
}
int complong(int *a, int *b)
{
    int i;
    if(a[0] > b[0]) return 1;
    if(a[0] < b[0]) return -1;
    for(i = a[0];i >= 1;i--)
    {
        if(a[i] > b[i]) return 1;
        if(a[i] < b[i]) return -1;
    }
return 0;
}
