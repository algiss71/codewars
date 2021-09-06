/* Программа опоса студентов*/
#include <stdio.h>
//#define RESPONSE_SIZE 5// ответы студентов
//#define FREQUENCY_SIZE 7// оценки

int main()
{
	int a, rt;
	//int r[RESPONSE_SIZE]={2, 3, 4, 6, 2};
	int r[5]={2, 3, 4, 6, 2};

	//int f[FREQUENCY_SIZE]={0};
	int f[7]={0};

	for (a = 0; a < RESPONSE_SIZE; a++)
		{
			++f[r[a]];
			//printf("%d\n",++f[r[a]]);
		}
		//printf("\n");
		//f[r[a]]=f[r[a]] + 1;

	printf("%s%17s\n","Rating","Frequency");

	for (rt = 1; rt < FREQUENCY_SIZE; rt++)
		printf("%6d%17d\n",rt, f[rt]);

	return 0;

}
