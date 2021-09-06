#include <stdio.h>
#include <stdlib.h>
#include <math.h>
char s[] = "Balanced";
char s1[] = "Not Balanced";

unsigned long long int integerPower(int a,int b)
{
    int i;
    unsigned long long int p = a;

    if(b==0) return 1;

    for(i = 1;i < b; ++i)
        p *=  a;


    return p;
}
const char* balancedNum(unsigned long long int number) {

int i = 0;
unsigned long long int num = number;

while(num)
{
    num /= 10;
    i++;
}

int A[i];

for(int n = 0; n < i; n++){
    A[n] = (number / integerPower(10,i - (n + 1))) % 10;
}

int sum1 = 0;
int sum2 = 0;
for(int n = 0; n < i; n++)
{
    if(i & 1)
    {
        if(n <(i/2)) sum1 += A[n];
        if(n >(i/2)) sum2 += A[n];
    }
    else
    {
        if(n <(i/2-1)) sum1 += A[n];
        if(n >=(i/2 + 1)) sum2 += A[n];
    }
}
if(sum1 != sum2) return s1;
    return s;
}

int main()
{

    printf("%s\n", balancedNum(959));
    return 0;
}
/*
int digits[20]; // 20 digits is the max digits of an uint64_t
    int n = 0;
    // Extract digits of the number to an array
    do {
      digits[n++] = number % 10;
      number /= 10;
    } while (number);

    // Sum the correct values of the array
    int sumLeft = 0, sumRight = 0;
    for (int i = 0; i < (n-1)/2; ++i) {
      sumLeft  += digits[i];
      sumRight += digits[n-i-1];
    }

    return (sumLeft == sumRight) ? "Balanced" : "Not Balanced";
*/
