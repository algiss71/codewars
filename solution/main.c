#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <ctype.h>
#include <string.h>

char* solution(const char *camelCase) {

    const int N = strlen(camelCase);
    int k = 0;

    for (int i = 0; i < N; i++)
        if(isupper(camelCase[i]))
            k++;

    char* S = (char*)malloc((N + 1 + k) * sizeof(char));

    int j = 0;

    for (int i = 0; i < N; i++)
        {
        if (isupper(camelCase[i]))
            S[j++]= ' ';
        S[j++] = camelCase[i];
        }

    S[j]= '\0';

  return S;
}

int main()
{
    const int N = 300;
    char S[N];
  printf("%s\n",solution(gets(S)));
}
