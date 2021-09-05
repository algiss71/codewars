#include <stdio.h>
#include <stdlib.h>



#include <malloc.h>
#include <string.h>
char * utoa_builtin_div(int value, char *buffer)
{
   buffer += 11;
// 11 байт достаточно для десятичного представления 32-х байтного числа
// и  завершающего нуля
   *--buffer = 0;
   do
   {
      *--buffer = value % 10 + '0';
      value /= 10;
   }
   while (value != 0);
   return buffer;
}
/*char *strsum(const char *a, const char *b)
{
    return NULL;
}*/
int main()
{
    char s[]="one";
    printf("%s",utoa_builtin_div(123,s));
    return 0;
}
