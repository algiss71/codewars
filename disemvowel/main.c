#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char *copy_part_str(const char *S)
{
   const char ArrSym[]="euioaEUIOA";
   const int N = strlen(S);


   int k = 0;
    char* S1 = (char*)malloc((N) * sizeof(char));
    for (int i = 0; i < N; i++)
        if (strchr(ArrSym,S[i]) == NULL && S[i])
            S1[k++]=S[i];
    S1[k]='\0';

    return S1;
}

int main() {

   const int N = 300;
 char S[N];


  printf("%s",copy_part_str(gets(S)));
}
