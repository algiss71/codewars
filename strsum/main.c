#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
#include <string.h>

char *strsum(const char *a, const char *b)
{
    int la = strlen(a);
    int lb = strlen(b);

    char* sum = (char*)malloc((la+lb + 1) * sizeof(char));
    char *aPtr;
    unsigned long long int valueA = strtoul(a,&aPtr,10);
    printf("value = %llu\n",valueA);
    char *bPtr;
    unsigned long long int valueB = strtoul(b,&bPtr,10);
    printf("value = %llu\n",valueB);
    unsigned long  long int value = valueA + valueB;

   *--sum = 0;
   do
   {
      *--sum = value % 10 + '0';
      value /= 10;
   }
   while (value != 0);
   return sum;
    //return ltoa((atoi(a) + atoi(b)), sum, 10);
}
int main()
{
//----number->str------------------------------------
    char buffer[120];
    int val = 123;
    printf("%s",ltoa(val, buffer, 10));
//----str->number------------------------------------
char num1[80], num2[80];
printf("Enter first number: ");
gets(num1);
printf("Enter second number: ");
gets(num2);
printf("The sum is: %s\n", strsum(num1, num2));
    return 0;
}
