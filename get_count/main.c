/*
Возвращает число (количество) гласных в заданной строке.‎

‎Мы рассмотрим , , , , как гласные для этой ката (но не ).‎a e i o u y

‎Входная строка будет состоять только из строчных букв и/или пробелов‎.
*/
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <string.h>

size_t get_count(const char *s)
{
    const char* vowel = "aeiou";
    int i = 0,c = 0;

    for(i = 0; i < strlen(s); i++)
        for(int j = 0; j < 5; j++)
        {
            if(s[i]==vowel[j])
            {
                c++;
                break;
            }
        }
    return c;
}
int main()
{
    printf("  %d\n", get_count("abracadabra"));
    return 0;
}
