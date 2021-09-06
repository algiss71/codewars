#include <stdio.h>
#include <stdlib.h>
/*
  int n[7] = {0};
  for (int i = 0; i < 5; i++) n[dice[i]]++;
  return n[1]/3*1000 + n[1]%3*100 + n[2]/3*200 + n[3]/3*300 + n[4]/3*400 + n[5]/3*500 + n[5]%3*50 + n[6]/3*600;
*/

int score(const int dice[5])
{


    int points = 0;
    int itog[7] = {0};

    for(int i = 0; i < 5; i++)
        ++itog[dice[i]];

            if(itog[1]== 5) points += 1200;
            if(itog[1]== 4) points += 1100;
            if(itog[1]== 3) points += 1000;

            if(itog[1]== 2) points += 200;
            if(itog[1]== 1) points += 100;

            if(itog[6]>= 3) points += 600;
            if(itog[4]>= 3) points += 400;
            if(itog[3]>= 3) points += 300;
            if(itog[2]>= 3) points += 200;

            if(itog[5]== 5) points += 600;
            if(itog[5]== 4) points += 550;
            if(itog[5]== 3) points += 500;
            if(itog[5]== 2) points += 100;
            if(itog[5]== 1) points += 50;

return points;
}

int main()
{
    const int d[5] = {3,3,3,3,3};

    printf("\n%d\n",score(d));
    return 0;
}
