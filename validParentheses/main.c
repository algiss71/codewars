#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

bool validParentheses(const char *str_in) {


    const int N = strlen(str_in);
    //---------------------------------------------------------
    if (!N) return true;
    if (str_in[0] == '"' && str_in[1] == '"') return true;
    //---------------------------------------------------------
    int i = 0;
    int kl = 0; int kr = 0;
    for (i = 0; i < N; i++)
    {
        if(str_in[i] == '(') kl++;
        if(str_in[i] == ')') kr++;
    }

    const int sLen = kl + kr;
    printf("%d\n",sLen);
    //---------------------------------------------------------
    if(kl != kr) return false;
    //---------------------------------------------------------

    char S[sLen+1];

    int iS = 0;
    for (i = 0; i < N; i++)
    {
        if(str_in[i] == '(' || str_in[i] == ')')
        {
            S[iS]=str_in[i];
            iS++;
        }
    }
        S[iS]='\0';

    if(S[0] == ')')
    {
        puts("S[0] == ')'");
        return false;
    }


        printf("S = %s\n",S);

    int sl = 0; int sr = 0;
    int s = 0;


    //printf("N = %d, N / 2 = %d\n",N,N & 1);
    for(int i = 0;i < sLen + 1;i++)
    {
            if(S[i] == '(' )
            {
                s += 1;
                kl++;
            }

            if(S[i] == ')')
            {
                kr++;
                if(s != 0 ) s -= 1;
            }

            //printf("sl = %d, sr = %d\n",sl,sr);
            printf("s = %d, kl = %d, kl = %d\n",s,kl,kr);
    }
//printf("sl - sr = %d\n",sl-sr);
printf("s = %d\n",s);

        if(s) return false;
        return true;
}

int main()
{
    const int N = 300;
    char S[N];
    char t[]="true";
    char f[]="false";
if(validParentheses(gets(S)))
  printf("%s",t);
else
    printf("%s",f);
}
