#include <stdio.h>
#include <stdlib.h>

/*
    while (++*array == *++array);
    return --*array;
*/
char findMissingLetter(char array[], int arrayLength);
int main()
{
    char s[]={'O','Q','R','S'};
    int N = sizeof(s)/sizeof(char);

    printf("%c",findMissingLetter(s,N));
    return 0;
}
char findMissingLetter(char array[], int arrayLength)
{
    while (++*array == ++*array);
    return --*array;
/*int i = 0;
for(i = 0;i<arrayLength;i++)
    if((array[i+1]-array[i]) > 1)
        break;
return array[i+1] - 1;*/
}
